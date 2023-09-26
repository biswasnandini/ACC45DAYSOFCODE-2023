//Lost weekends
#include <iostream>
using namespace std;
int main() {
 
    // * Initializing variables
    int numberOfTestCases, totalHours, currentDayHours, productivityCount;
 
    // * Accepting the number of test cases
    cin>>numberOfTestCases;
 
    // * Executing each test case one by one
    while(numberOfTestCases--) {
 
        // * Initializing total hours to 0 for current test case
        totalHours = 0;
 
        /*
        *   Accepting the number of hours, chef has worked each day
        *   for current test case and updating the total hours
        */
        for(int i=0; i<5; i++) {
            cin>>currentDayHours;
            totalHours += currentDayHours;
        }
 
        // * Accepting the productivity count
        cin>>productivityCount;
 
        /*
        *   Updating total hours by multiplying it with productivity count
        *   as total hours are according to a working day at office
        */
        totalHours *= productivityCount;
 
        /*
        *   If total hours is less than 120 (24*5), print No, Otherwise print Yes
        */
        if(totalHours <= 120) {
            cout<<"No"<<endl;
        } else {
            cout<<"Yes"<<endl;
        }
    }
}
