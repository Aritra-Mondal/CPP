#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void reverse_queue(queue<int> &q){
    stack <int> st;
    cout<<st.size();
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}

void print(queue<int> &q){
    while(!q.empty()){
        cout<< q.front()<<" ";
        q.pop();
    }
}


void reverse_queue_recur(queue<int> &q){
    if(q.empty()){
        return ;
    }
    int fronts=q.front();
    q.pop();
    reverse_queue_recur(q);

    q.push(fronts);
}

int main()
{
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    reverse_queue(q);
    //reverse_queue_recur(q);
    print(q);
    return 0;
}