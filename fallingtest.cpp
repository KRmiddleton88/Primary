#include <iostream>

constexpr double GRAVITY = 9.8;
 //Double gravity is expressed in m/s^2

double gettowerheight()
{
    double height{};
    std::cout << "\n\tEnter the height of the tower in meters: ";
    std::cin >> height;
    
    return height;
}


double calculate_distance(double& height, int seconds)
{
    double distance = (height - (GRAVITY * (seconds * seconds) / 2));
    // This variable calculates the total distance remaining from the ground
    
    return distance;
}

void print_results(double height)
{
    int count_seconds = 0;
    
    while (calculate_distance(height, count_seconds) >= 0) {
        std::cout << "\n\n\tAt " << count_seconds << " seconds the ball is at a  height of: " << calculate_distance(height, count_seconds) << " meters";
        ++count_seconds;
    }
    std::cout << "\n\n\t The ball has now hit the ground after " << count_seconds << " seconds.\n\n\n";
}

int main()
{
    double towerheight {gettowerheight()};
    
    print_results(towerheight);
}

