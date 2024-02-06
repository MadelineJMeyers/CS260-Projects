#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();

    int min = 0; // minimum distance to zero
    std::vector<int> templist; // vector list to hold temperatures list

    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();

        templist.push_back(t);
    }

    if(n == 0){ // if the number of elements is zero return the integer zero
        cout << "0" << endl;
    }else{

        for (int j = 0; j < n; j++){
            if(min == 0){ // if the minimum distance to zero is equal to zero set equal to vector element in index j
                min = templist[j];
            }
            else if(templist[j] > 0 && templist[j] <= abs(min)){ // if the vector element is greater than zero and less than or equal to the minimum distance to zero set the min distance to this element
                min = templist[j];
            }
            else if(templist[j] < 0 && - templist[j] < abs(min)){ // if the vector element is less than zero and the negation of this negative value is less than the minimum distance set the minimum distance to this element
                min = templist[j];
            }
        }
        cout << min << endl; // prints the minimum distance to zero
    }
    
}
