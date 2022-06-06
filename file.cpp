#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

struct City
{
    std::string cityName;
    double latitude, longitude;

    void distance(std::string firstCityName, std::string secondCityName, std::vector<City> citiesDetails)
    {
        double firstCityLatitude, firstCityLongitude, secondCityLatitude, secondCityLongitude;
        for (int i = 0; i < citiesDetails.size(); i++)
        {
            if (citiesDetails[i].cityName == firstCityName)
            {
                firstCityLatitude = citiesDetails[i].latitude;
                firstCityLongitude = citiesDetails[i].longitude;
            }
            else if (citiesDetails[i].cityName == secondCityName)
            {
                secondCityLatitude = citiesDetails[i].latitude;
                secondCityLongitude = citiesDetails[i].longitude;
            }
        }

        double x = pow((firstCityLatitude - secondCityLatitude), 2);
        double y = pow((firstCityLongitude - secondCityLongitude), 2);
        double euclideanDistranace = sqrt(x + y);
        std::cout << "Distance: " << euclideanDistranace << std::endl;
    }

    void nearestCityAndDirection(int givenLatitude, int givenLongitude, std::vector<City> citiesDetails)
    {
        double finalDistance, compareDistance;
        std::string nearestCityName;
        double x = pow((citiesDetails[0].latitude - givenLatitude), 2);
        double y = pow((citiesDetails[0].longitude - givenLongitude), 2);
        finalDistance = sqrt(x + y);

        for (int i = 0; i < citiesDetails.size(); i++)
        {
            double x = pow((citiesDetails[i].latitude - givenLatitude), 2);
            double y = pow((citiesDetails[i].longitude - givenLongitude), 2);
            compareDistance = sqrt(x + y);

            if (compareDistance < finalDistance)
            {
                finalDistance = compareDistance;
                nearestCityName = citiesDetails[i].cityName;
            }
        }
        int indexNumber;
        for (int i = 0; i < citiesDetails.size(); i++)
        {
            if (citiesDetails[i].cityName == nearestCityName)
            {
                indexNumber = i;
                break;
            }
        }
        std::cout << "Nearest city name: " << nearestCityName << std::endl;
        if (citiesDetails[indexNumber].latitude >= givenLatitude && citiesDetails[indexNumber].longitude >= givenLongitude)
        {
            std::cout << "Go to East-North" << std::endl;
        }
    }
};

int main()
{
    City cities;
    std::vector<City> citiesDetails;
    std::string output;
    int numberOfLines = 0;
    std::ifstream fileOutPut;
    fileOutPut.open("wincities1.txt");
    if (fileOutPut.good())
    {
        // std::cout<<"hello";
        while (fileOutPut >> cities.cityName >> cities.latitude >> cities.longitude)
        {
            // std::cout<<cities.cityName;
            citiesDetails.push_back(cities);
            numberOfLines += 1;
        }
    }
    // std::cout << "number of lines ";
    // std::cout << numberOfLines << std::endl;
    citiesDetails.resize(numberOfLines);

    std::string firstCityName, secondCityName;
    std::cout << "Enter first and second city name: ";
    std::getline(std::cin, firstCityName);
    std::getline(std::cin, secondCityName);

    cities.distance(firstCityName, secondCityName, citiesDetails);

    double givenLatitude, givenLongitude;
    std::cout << "Enter first and second coordinates: ";
    std::cin >> givenLatitude >> givenLongitude;

    cities.nearestCityAndDirection(givenLatitude, givenLongitude, citiesDetails);
    for (int i = 0; i < citiesDetails.size(); i++)
    {
        std::cout << citiesDetails[i].cityName << std::endl;
    }

    return 0;
}