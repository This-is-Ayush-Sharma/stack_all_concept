#include <bits/stdc++.h>

using namespace std;

class Stack
{
private:
    int top;    /// to keep the track of top most value of the stack
    int arr[5]; // this is a stack array

public:
    Stack() // default constructor
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if (top == 4)
            return true;
        else
            return false;
    }
    void push(int val)
    {
        if (isFull())
            cout << "Stack Overflow....." << endl;
        else
        {
            top++;
            arr[top] = val;
        }
    }
    int pop()
    {
        if (isEmpty())
            cout << "Stack Underflow" << endl;
        else
        {
            int x = arr[top]; // storing the top most value before deletion
            arr[top] = 0;     // deleting the top most value
            top--;            // decrementing the top
            return x;         // returning the top most value
        }
        return 0;
    }
    int count()
    {
        return top + 1;
    }
    int peek(int pos)
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return 0;
        }
        return arr[pos];
    }
    void change(int pos, int item)
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            arr[pos] = item;
            cout << "value changed at position " << pos << "=" << arr[pos] << endl;
        }
    }
    void display()
    {
        if (isEmpty())
            cout << "Stack is empty" << endl;
        else
        {
            cout << "the values are:-\n";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << endl;
            }
        }
    }
};
int main()
{
    Stack s1;
    int option, pos, val;
    do
    {
        cout << ">>>>>>>>>>>>>>>>>The available options are:-<<<<<<<<<<<<<<<<\n";
        cout << "                      1. PUSH\n";
        cout << "                      2. POP\n";
        cout << "                      3. isEmpty()\n";
        cout << "                      4. isFull()\n";
        cout << "                      5. PEEK()\n";
        cout << "                      6. COUNT()\n";
        cout << "                      7. CHANGE()\n";
        cout << "                      8. DISPLAY\n";
        cout << "                      9. CLEAR SCREEN\n";
        cout << "               0. <<<<<<<<TO EXIT>>>>>>>\n";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "enter a item to be pushed:-";
            cin >> val;
            s1.push(val);
            break;
        case 2:
            val = s1.pop();
            cout << "POPED OUT VALUE IS " << val << endl;
            break;
        case 3:
            if (s1.isEmpty())
                cout << "Empty Stack" << endl;
            else
                cout << "Stack not empty" << endl;
            break;
        case 4:
            if (s1.isFull())
                cout << "Stack Full" << endl;
            else
                cout << "Stack not Full" << endl;
            break;
        case 5:
            cout << "enter the position:-";
            cin >> pos;
            cout << "the peeked value is " << s1.peek(pos) << endl;
            break;
        case 6:
            cout << "the total values are " << s1.count() << endl;
            break;
        case 7:
            cout << "enter the position:-";
            cin >> pos;
            cout << "enter the value:-";
            cin >> val;
            s1.change(pos, val);
            break;
        case 8:
            s1.display();
            break;
        case 9:
            system("cls");
            break;
        default:
            cout << ">>>>>>terminating the code<<<<<<";
            break;
        }
    } while (option != 0);
    return 0;
}
