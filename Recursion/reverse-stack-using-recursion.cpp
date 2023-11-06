void insertAtBeginning(stack<int> &stack, int ele)
{
    if(stack.empty()){
        stack.push(ele);
        return;
    }

    int top = stack.top();
    stack.pop();

    insertAtBeginning(stack, ele);

    stack.push(top);

}

void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()) return;

    int top = stack.top();

    stack.pop();
    reverseStack(stack);

    insertAtBeginning(stack,top);
}