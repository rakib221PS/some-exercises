// . Use the push method in the copy constructor.
#include <iostream>
#include <stdexcept>

class Node
{
public:
    int value;
    Node *next;

    Node(int _value, Node *_next = nullptr) : value(_value), next(_next)
    {
    }
};

class Queue
{
    Node *head;
    Node *tail;
    Node *copy = nullptr;

public:
    Queue() : head(nullptr), tail(nullptr)
    {
    }
    bool isEmpty() const
    {
        return head == nullptr;
    }

    void push(int x)
    {
        if (isEmpty())
        {
            head = new Node(x);
            tail = head;
        }
        tail->next = new Node(x);
        tail = tail->next;
    }

    int front()
    {
        if (isEmpty())
        {
            throw std::invalid_argument("Under flow");
        }
        return head->value;
    }

    int pop()
    {
        if (isEmpty())
        {
            throw std::runtime_error("Under flow");
        }
        if (head->next == nullptr)
        {
            Node *tmp = head;
            int topValue = head->value;
            head = nullptr;
            tail = nullptr;
            delete tmp;
            return topValue;
        }
        Node *tmp = head;
        int topValue = head->value;
        head = head->next;
        delete tmp;
        return topValue;
    }

    void printList()
    {
        if (isEmpty())
        {
            throw std::runtime_error("Empty Queue");
        }
        if (copy != nullptr)
        {
            delete copy;
        }
        copy = head;

        while (copy != nullptr)
        {
            std::cout << copy->value << " ";
            copy = copy->next;
        }
    }

    void clear()
    {
        while (!isEmpty())
        {
            deleteHead();
        }
    }
    ~Queue()
    {
        clear();
    }

    Queue(const Queue &original) : head(nullptr)
    {
        if (!original.isEmpty())
        {
            head = new Node(original.head->value);
            Node *src = original.head->next;
            Node *dsc = head;
            while (src != nullptr)
            {
                dsc->next = new Node(src->value);
                dsc = dsc->next;
                src = src->next;
            }
            delete src;
            // delete dsc;
        }
    }

    void extend(const Queue &qu)
    {
        head = nullptr;
        if (!qu.isEmpty())
        {
            head = new Node(qu.head->value);
            Node *src = qu.head->next;
            Node *dsc = head;
            while (src != nullptr)
            {
                dsc->next = new Node(src->value);
                dsc = dsc->next;
                src = src->next;
            }
            delete src;
            // delete dsc;
        }
    }

    void merge(const Queue &m, const Queue &n)
    {
        head = nullptr;
        Node *d;
        Node *s;
        Node *si;
        while (1)
        {
            if (m.isEmpty())
            {
                if (isEmpty())
                {
                    head = new Node(n.head->value);
                    si = n.head->next;
                    d = head;
                    while (si != nullptr)
                    {
                        d->next = new Node(si->value);
                        d = d->next;
                        si = si->next;
                    }
                }
                else
                {
                    while (si != nullptr)
                    {
                        d->next = new Node(si->value);
                        d = d->next;
                        si = si->next;
                    }
                }
            }
            else if (n.isEmpty())
            {
                if (isEmpty())
                {
                    head = new Node(m.head->value);
                    s = m.head->next;
                    d = head;
                    while (s != nullptr)
                    {
                        d->next = new Node(s->value);
                        d = d->next;
                        s = s->next;
                    }
                }
                else
                {
                    while (s != nullptr)
                    {
                        d->next = new Node(s->value);
                        d = d->next;
                        s = s->next;
                    }
                }
            }
            else
            {
                if (isEmpty())
                {
                    if (m.head->value > n.head->value)
                    {
                        head = new Node(m.head->value);
                        s = m.head->next;
                        d = head;
                        si = n.head->next;
                    }
                    else
                    {
                        head = new Node(n.head->value);
                        s = m.head->next;
                        d = head;
                        si = n.head->next;
                    }
                }
                else
                {
                    if (s->value > si->value)
                    {
                        d->next = new Node(s->value);
                        d = d->next;
                        s = s->next;
                        si = si->next;
                    }
                    else
                    {
                        d->next = new Node(si->value);
                        d = d->next;
                        s = s->next;
                        si = si->next;
                    }
                }
            }
            if (s == nullptr && si == nullptr)
            {
                break;
            }
        }
    }

    void inserted_sorted(const Queue &ins)
    {
        if (ins.isEmpty())
        {
            throw std::runtime_error("Trying to read from an empty queue");
        }
        if (!isEmpty())
        {
            delete head;
        }
        head = new Node(ins.head->value);
        Node *sor = ins.head->next;
        Node *inserted = head;
        int n = 1;
        while (sor != nullptr)
        {
            if (inserted->value < sor->value)
            {
                int val = inserted->value;
                inserted->value = sor->value;
                sor->value = val;
                inserted->next = new Node(sor->value);
                inserted = inserted->next;
                sor = sor->next;
                n++;
            }
            else
            {
                inserted->next = new Node(sor->value);
                inserted = inserted->next;
                sor = sor->next;
                n++;
            }
            if (head->value > n)
            {
                break;
            }
            
        }
    }

private:
    void deleteHead()
    {
        Node *tmp = head;
        head = head->next;
        delete tmp;
    }
};

int main()
{
    Queue queue, anotherQueue, newQueue, result, insertedQueue;
    // for (int i = 0; i < 2; i++)
    // {
    //     // std::cin>>n;
    //     queue.push(i);
    // }
    // std::cout << queue.front()<<std::endl;
    // Queue copyQueue(queue);
    // anotherQueue.extend(queue);
    // std::cout<<"copy "<<anotherQueue.front()<<std::endl;
    // queue.pop();
    // anotherQueue.printList();
    for (int i = 0; i < 2; i++)
    {
        newQueue.push(i + 1);
    }

    result.merge(queue, newQueue);
    result.printList();
    insertedQueue.inserted_sorted(newQueue);
    return 0;
}