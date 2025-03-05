#include <iostream>
using namespace std;

class TrieNode
{
public:
      char data;
      TrieNode *children[26];
      bool isTerminal; // this is used to check weather the last node is terminal node or not.

      TrieNode(char ch)
      {
            data = ch;
            for (int i = 0; i < 26; i++)
            {
                  children[i] = NULL;
            }

            isTerminal = false;
      }
};
class Trie
{
public:
      TrieNode *root;
      Trie()
      {
            root = new TrieNode('\0');
      }
      void insertutil(TrieNode *root, string word)
      {
            if (word.length() == 0)
            {
                  root->isTerminal = true;
                  return;
            }

            // Assume that all the letters are in capital letter
            int index = word[0] - 'A';
            TrieNode *child;
            // present
            if (root->children[index] != NULL)
            {
                  child = root->children[index];
            }
            else
            {
                  child = new TrieNode(word[0]);
                  root->children[index] = child;
            }

            insertutil(child, word.substr(1));
      }

      void insertword(string word)
      {
            insertutil(root, word);
      }

      bool searchutil(TrieNode *root, string word)
      {
            if (word.length() == 0)
            {
                  return root->isTerminal;
            }
            int index = word[0] - 'A';
            TrieNode *child;

            if (root->children[index] != NULL)
            {
                  child = root->children[index];
            }

            else
            {
                  return false;
            }

            return searchutil(child, word.substr(1));
      }

      bool searchword(string word)
      {
            return searchutil(root, word);
      }
};

int main()
{
      Trie *t = new Trie();
      t->insertword("AKASH");
      t->insertword("AWASH");
      t->insertword("ERASH");
      t->insertword("AREDSDSH");
      cout << "DONE" << endl;

      cout << t->searchword("AASH") << endl;
      cout << t->searchword("AKASH") << endl;
      cout << t->searchword("AREDSDSH") << endl;
}