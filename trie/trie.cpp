// trie data structure

#include<bits/stdc++.h>

using namespace std;

class TrieNode {
    public:
       char data;
       TrieNode* children[26];
       bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for(int i = 0 ; i < 26 ; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
        }   

};

class Trie {
    TrieNode* root;
    Trie()
    {
        root = new TrieNode('\0');
    }
    void insertutil(TrieNode* root, string word)
    {
        if(word.length() == 0)
        {
           root -> isTerminal = true;
           return;
        }
     // word in cap letter
     int index = word[0] - 'A';
     TrieNode* child;

     // present

     if(root -> children[index] != NULL)
     {
        child = root -> children[index];
     }
     else 
     {
        child = new TrieNode(word[0]);
        root -> children[index];
     }
     insertutil(child, word.substr());
    }

    bool searchutil(TrieNode* root, string word)
    {
        if(word.length() == 0)
        {
            return root -> isTerminal;
        }
        int index = word[0] - 'A';
        TrieNode* child ;

       if(root -> children[index] != NULL)
       {
        child = root -> children[index];
       }
       else {
        return false;
       }

       return searchutil(root, word);

    }

};