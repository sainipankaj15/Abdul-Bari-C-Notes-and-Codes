// https://leetcode.com/problems/implement-queue-using-stacks/


class MyQueue
{
public:
    stack<int> primary;
    stack<int> secondary;
    MyQueue()
    {
    }

    void push(int x)
    {
        primary.push(x);
    }

    int pop()
    {
        if (secondary.size() == 0)
        {
            if (primary.size())
            {
                while (!primary.empty())
                {
                    secondary.push(primary.top());
                    primary.pop();
                }
            }
        }

        if (secondary.size())
        {
            int x = secondary.top();
            secondary.pop();
            return x;
        }

        return -1;
    }

    int peek()
    {

        if (secondary.size() == 0)
        {
            if (primary.size())
            {
                while (!primary.empty())
                {
                    secondary.push(primary.top());
                    primary.pop();
                }
            }
        }

        if (secondary.size())
        {
            int x = secondary.top();
            // secondary.pop();
            return x;
        }

        return -1;
    }

    bool empty()
    {
        if (primary.size() == 0 && secondary.size() == 0)
            return 1;

        return 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */