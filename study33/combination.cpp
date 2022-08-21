#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int n = 4;
    vector<int> arrn;
    vector<bool> visited(n, true);
    
    int cnt = 2;
    for (int i = 0; i < n - cnt; i++)
    {
        visited[i] = false;
    }
    
    for(int i=1;i<=n;i++)
         arrn.push_back(i);
    do{
        for (int i=0;i<n;i++)
            if(visited[i]) cout << arrn[i];
        cout << endl;
    }while(next_permutation(visited.begin(), visited.end()));
    return arrn[0];
}