// #include<bits/stdc++.h>
// using namespace std;

// int minimumMeals(int N, int M, int K, vector<int>& V) {
//     if (N < K) {
//         return -1; // Not enough food items to create a meal
//     }

//     sort(V.begin(),V.end());

//     int minMeals = 1;
//     int diff = V[K - 1] - V[0];

//     if (diff > M) {
//         return -1;
//     }

//     return minMeals;
// }

// int main() {
//     int N, M, K;
//     cin >> N >> M >> K;

//     vector<int> V(N);
//     for (int i = 0; i < N; i++) {
//         cin >> V[i];
//     }

//     int result = minimumMeals(N, M, K, V);
//     cout << result <<endl;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int minimumMeals(int N, int M, int K, std::vector<int> &V)
// {
// 	if (N < K)
// 	{
// 		return -1; // Not enough food items to create a meal
// 	}

// 	std::sort(V.begin(), V.end());

// 	int minMeals = 0;
// 	int maxi=INT_MIN;
// 	int i = 0;	   // Start of the sliding window
// 	int j = K - 1; // End of the sliding window

// 	while (j < N)
// 	{
// 		int diff = V[j] - V[i];
// 		if (diff > M)
// 		{
// 			return -1; // Maximum allowed difference exceeded
// 		}

// 		minMeals++;
// 		i++;
// 		j++;
// 		maxi=max(maxi,minMeals);
// 	}

// 	return maxi;
// }

// int main()
// {
// 	int N, M, K;
// 	std::cin >> N >> M >> K;

// 	std::vector<int> V(N);
// 	for (int i = 0; i < N; i++)
// 	{
// 		std::cin >> V[i];
// 	}

// 	int result = minimumMeals(N, M, K, V);
// 	std::cout << result << std::endl;

// 	return 0;
// }

#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int find_min_relatives(int n, int num_relationships, vector<vector<int>>& relationships, int john, int dave) {
    // Step 1
    unordered_map<int, vector<int>> adjacency_list;
    
    // Step 2
    for (auto& relation : relationships) {
        int a = relation[0];
        int b = relation[1];
        adjacency_list[a].push_back(b);
        adjacency_list[b].push_back(a);
    }
    
    // Step 3
    queue<int> q;
    q.push(john);
    unordered_set<int>visited;
    visited.insert(john);
    
    // Step 4
    unordered_map<int, int> distance;
    distance[john] = 0;
    
    // Step 5
    while (!q.empty()) {
        int person = q.front();
        q.pop();
        
        if (person == dave) {
            return distance[dave];
        }
        
        for (int relative : adjacency_list[person]) {
            if (visited.find(relative) == visited.end()) {
                q.push(relative);
                visited.insert(relative);
                distance[relative] = distance[person] + 1;
            }
        }
    }
    
    // Step 6
    return -1;
}

int main() {
    int n = 7;
    int num_relationships = 5;
    vector<vector<int>> relationships = {{1, 3}, {1,4}, {2,5}, {2,6},{5,7}};
    int john = 3;
    int dave = 7;
    
    int min_relatives = find_min_relatives(n, num_relationships, relationships, john, dave);
    cout << "Minimum relatives involved: " << min_relatives << endl;
    
    return 0;
}