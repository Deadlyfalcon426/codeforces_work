#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
/*
https://codeforces.com/contest/2220/problem/A
our goal today is to order this basically so no numbers before can sum to the one at the end
what stands out immediately is sorting descending, example [3,4,7] to [7,4,3], 
and this seems worth a shot
ok worked pretty damn well quite easy this too like 20-30 min i think? 
wasnt paying attention time flew by
only issue was dupes can count as sums so we implemented check_unique using a set idk if that was the
most efficient way...
spent 20 min debugging and 25 writing first code, mistake was dumb used both push back and resize
then some black magic with the bool function bro im not doing the bool funct again for a while
*/
bool is_there_no_dupes(vector<int> sequence){
    set<int> unique_elements(sequence.begin(), sequence.end());
    if (sequence.size()==1){
        return true;
    }
    if (unique_elements.size()==sequence.size()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    //input
    int testcases;
    int sequence_length;
    int temp;
    vector<int> sequence;
    cin >> testcases;
    for (int test_case = 0; test_case<testcases; test_case++){
        //set up vector?
        cin >> sequence_length;
        sequence.clear();
        sequence.resize(sequence_length);
        for (int i= 0; i<sequence_length;i++){
            cin >> sequence[i];
        }
        
        if (is_there_no_dupes(sequence)){
            //sort descending
            sort(sequence.begin(), sequence.end(), greater<int>());
            for (int i = 0; i<sequence.size();i++){
                cout<<sequence[i]<<" ";
            }
            cout<<"\n";
        } else{
            cout<<"-1"<<"\n";
        }
    }
}