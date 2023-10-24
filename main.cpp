#include <iostream>
#include <vector>

using namespace std;

int main()
{
  char letter{};
  vector<int> numbers{};

  do
  {
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display the mean of numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << "Enter your choice:\n"
         << endl;

    cin >> letter;

    if (letter == 'P' || letter == 'p')
    {
      if (numbers.size() == 0)
      {
        cout << "[] - the list is empty" << endl;
      }
      else
      {
        cout << "[ ";
        for (auto number : numbers)
        {
          cout << number << " ";
        }
        cout << "]" << endl;
      }
    }
    else if (letter == 'A' || letter == 'a')
    {
      int number_to_add{};
      cout << "Enter integer to add:\n"
           << endl;
      cin >> number_to_add;
      numbers.push_back(number_to_add);
      cout << number_to_add << " was added to list" << endl;
    }
    else if (letter == 'M' || letter == 'm')
    {
      if (numbers.size() == 0)
      {
        cout << "Unable to calculate the mean - no data" << endl;
      }
      else
      {
        int total{0};
        for (auto number : numbers)
        {
          total += number;
        }
        cout << "The mean of numbers: " << static_cast<double>(total) / numbers.size() << endl;
      }
    }
    else if (letter == 'S' || letter == 's')
    {
      if (numbers.size() == 0)
      {
        cout << "Unable to determine the smallest number - no data" << endl;
      }
      else
      {
        int smallest_number{numbers.at(0)};
        for (auto number : numbers)
        {
          if (number < smallest_number)
          {
            smallest_number = number;
          }
        }
        cout << "The smallest number is: " << smallest_number << endl;
      }
    }
    else if (letter == 'L' || letter == 'l')
    {
      if (numbers.size() == 0)
      {
        cout << "Unable to determine the largest number - no data" << endl;
      }
      else
      {
        int largest_number{numbers.at(0)};
        for (auto number : numbers)
        {
          if (number > largest_number)
          {
            largest_number = number;
          }
        }
        cout << "The largest number is: " << largest_number << endl;
      }
    }
    else if (letter == 'Q' || letter == 'q')
    {
      cout
          << "Goodbye..." << endl;
    }
    else
    {
      cout << "Unknown selection, please try again" << endl;
    }
  } while (letter != 'Q' && letter != 'q');

  return 0;
}
