#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Solution {
public:
queue<char>qux;
stack<char>stx;

void pushCharacter(char c);
void enqueueCharacter(char c);
char popCharacter();
char dequeueCharacter();
};

void Solution::pushCharacter(char c){

stx.push(c);
}


void Solution::enqueueCharacter(char c){
qux.push(c);
}

char Solution::popCharacter(){
char x =stx.top() ;
stx.pop();
return x;
}

char Solution::dequeueCharacter(){
char x = qux.front();
qux.pop() ;
return x;
}


int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
