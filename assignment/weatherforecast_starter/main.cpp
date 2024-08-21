/* 
Assignment 4: Weather Forecast

This assignment works with template functions and lambdas to become the best weather forecaster
at the Stanford Daily. Be sure to read the assignment details in the PDF.

Submit to Paperless by 11:59pm on 5/10/2024.
*/

// TODO: import anything from the STL that might be useful!
#include <algorithm>
#include <fstream>
#include <iostream>
#include <numeric>
#include <vector>


// TODO: write convert_f_to_c function here. Remember it must be a template function that always returns
// a double.
// [function definition here]
template<typename  T> 
double convert_f_to_c(T f) {
  return (f - 32) * 5.0 * 9.0;
}
template<typename Function>
std::vector<double> get_forecast(std::vector<std::vector<double>> readings, Function fn) {
    // TODO: write get_forecast here!

  std::vector<double>result;
  for (const auto& day : readings) {
    for (const auto& temp : day) {
      result.push_back(fn(temp));
    }
  }

  return result;

}

int main() {
    std::vector<std::vector<double>> readings = {
        {70, 75, 80, 85, 90},
        {60, 65, 70, 75, 80},
        {50, 55, 60, 65, 70},
        {40, 45, 50, 55, 60},
        {30, 35, 40, 45, 50},
        {50, 55, 61, 65, 70},
        {40, 45, 50, 55, 60}
    };

    // TODO: Convert temperatures to Celsius and output to output.txt
  std::ofstream output("output.txt");
  auto celsius_readings = get_forecast(readings, convert_f_to_c<double>);
  for (const auto& temp:celsius_readings) {
    output << temp << ' ';
  }
  output << std::endl;

    // TODO: Find the maximum temperature for each day and output to output.txt

  for (const auto &day :readings) {
    auto maxTemp = *std::max_element(day.begin(),day.end());
    output << convert_f_to_c(maxTemp) << ' ';
  }
  
  output << std::endl;
    // TODO: Find the minimum temperature for each day and output to output.txt

  for (const auto &day :readings) {
    auto minTemp = *std::min_element(day.begin(),day.end());
    output << convert_f_to_c(minTemp) << ' ';
  }
    // TODO: Find the average temperature for each day and output to output.txt
  output << std::endl;

  for (const auto &day :readings) {
    double sum = std::accumulate(day.begin(),day.end(), 0.0); 
    double avg = sum / day.size();
    output << convert_f_to_c(avg) << ' ';
  }
  output << std::endl;
  return 0;
}
