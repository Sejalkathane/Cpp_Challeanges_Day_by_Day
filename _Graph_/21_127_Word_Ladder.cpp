#include <bits/stdc++.h>
using namespace std;

int ladderLength(string beginWord, string endWord, vector<string> &wordList)
{
    // make a queue
    queue<pair<string, int>> q;
    q.push({beginWord, 1});

    // copy wordListin set
    unordered_set<string> st(wordList.begin(), wordList.end());
    st.erase(beginWord);

    while (!q.empty())
    {
        // extract step and word from queue
        int step = q.front().second;
        string word = q.front().first;

        q.pop();

        if (word == endWord)
            return step;

        for (int i = 0; i < word.size(); i++)
        {
            char org = word[i];
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                word[i] = ch;
                if (st.find(word) != st.end())
                {
                    st.erase(word);
                    q.push({word, step + 1});
                }
            }
            word[i] = org;
        }
    }
       return 0;
}

int main()
{
    // Input: beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]

    string beginWord = "hit";
    string endWord = "cog";
    vector<string> wordList = {"hot", "dot", "dog", "lot", "log", "cog"};

    cout<<ladderLength(beginWord, endWord, wordList);
    return 0;
}