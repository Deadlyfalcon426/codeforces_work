/*
https://codeforces.com/contest/2218/problem/C
this is the most challenging one yet
for this we want to maximize the medians...
but how?
ok after much thinking i figured it out, we write the 2 biggest from front and then 
write the smallest, and repeat for the n 
for example, n=4 and then 12 11 1  10 9 2  8 7 3  6 5 4
unfortunately i ran out of time cause i joined late but im doing it anyways
plus i did the hard part of figuring out the logic for during the comp so i see that as a win
to reflect this comp was easy and i should have tried to hustle a bit more to start on time but
i have to study stuff after this so its good that i ate breakfast and whatnot*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
    //input
    int testcases;
    cin >> testcases;
    int n;
    vector<int> current_sequence;
    vector<int> new_sequence;
    int counter = 0;
    int counter_back = 0;
    for (int test_case = 0; test_case<testcases; test_case++){
        cin >> n;
        current_sequence.resize(3*n);
        //fill out current sequence
        for (int i = 0; i<3*n; i++){
            current_sequence[i] = i+1;
        }
        //switch up the array, as well as print out
        counter=0;
        counter_back = current_sequence.size()-1;
        new_sequence.resize(3*n);
        for (int i = n; i>0; i--){
            cout << current_sequence[counter_back]<< " ";
            counter_back--;
            cout << current_sequence[counter_back]<< " ";
            counter_back--;
            cout << current_sequence[counter]<< " ";
            counter++;
        }
        cout << "\n";
    }
}