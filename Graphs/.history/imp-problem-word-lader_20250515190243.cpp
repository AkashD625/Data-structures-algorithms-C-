/**
 * @file imp-problem-word-lader.cpp
 * @brief Implementation of the Word Ladder problem using BFS.
 *
 * @details
 * This problem demonstrates the use of Breadth-First Search (BFS) to find the shortest
 * transformation sequence from a start word to a target word, where each intermediate
 * word must exist in a given word list and differ by only one character.
 *
 * Key Learnings:
 * - BFS is an effective algorithm for finding the shortest path in an unweighted graph.
 * - The use of an unordered_set allows for efficient lookups and deletions, optimizing
 *   the search process.
 * - String manipulation and character replacement are crucial for generating neighbors
 *   in the word transformation process.
 * - Erasing visited words from the set prevents revisiting and ensures correctness.
 *
 * @note The worst-case time complexity of unordered_set operations can degrade to O(n),
 * but it is typically O(1) on average.
 */
// unorderset searches in O(1) and the worst case is O(n) of the linear seach



class Solution
{
public:
      int wordLadderLength(string startWord, string targetWord,
                           vector<string> &wordList)
      {
            // Code here
            queue<pair<string, int>> q;
            q.push({startWord, 1});
            unordered_set<string> st(wordList.begin(), wordList.end());
            st.erase(startWord);

            while (!q.empty())
            {
                  string word = q.front().first;
                  int steps = q.front().second;
                  if (targetWord == word)
                        return steps;
                  q.pop();
                  for (int i = 0; i < word.length(); i++)
                  {
                        char original = word[i];
                        for (char ch = 'a'; ch <= 'z'; ch++)
                        {
                              word[i] = ch;
                              // which mean exist
                              if (st.find(word) != st.end())
                              {
                                    q.push({word, steps + 1});
                                    st.erase(word);
                              }
                        }
                        word[i] = original;
                  }
            }

            return 0;
      }
};