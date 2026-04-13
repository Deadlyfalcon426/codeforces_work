/*
https://codeforces.com/contest/2220/problem/B
this one reads pretty hard
check if we can move forward or backward, if we wait somewhere for cycle_length long then that
attempt is gone
i feel like brute force might be it here cause elegance looks a bit difficult
maybe a more mathematical rather than visual approach
i feel like taking algorithmic or discrete math would have bailed me out here
OK WHAT IF WE LOOK FOR SECTIONS THAT ARE UNPASSABLE
like [1,1,1,1,0,1] volunteers with cycle length 2, then 
ok that was reallllly hard to visualize
what if I built something to visualize it second by second? maybe it would also be the key!
*/
#include <vector>
#include <iostream>
using namespace std;
int main(){
    //input
    
    int testcases;
    int guards_count;
    int cycle_length;
    /*
    cin >> testcases;
    for (int test_case = 0; test_case<testcases; test_case++){
        cin >> guards;
        cin >> cycle_length;

    }
    //put this on hold for now
        */
    cin>>guards_count;
    cin>>cycle_length;
    int timer=0;
    vector<int> positions;
    int player=0;
    positions.resize(guards_count);
    bool still_stuck=true;
    for (int i = 0; i<guards_count;i++){
        cin >>positions[i];
    }
    while(still_stuck){
        if ((positions[player+1]+timer+1)%cycle_length!=0){
            
        }
    }
}