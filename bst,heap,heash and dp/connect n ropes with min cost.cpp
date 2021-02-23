#include <iostream> 
#include <queue>       
#include <vector>      
#include <functional> 
int ConnectRopes(std::vector<int> vecInput)
{
    int result = 0;
    std::priority_queue<int, std::vector<int>, std::greater<int> >
        connectEdges(vecInput.begin(), vecInput.end());
    int interimResult = 0;
    while (!connectEdges.empty())
    {
        int minFirst = connectEdges.top();
        int minSecond = 0;
        connectEdges.pop();
        if (!connectEdges.empty())
        {
            minSecond = connectEdges.top();
            connectEdges.pop();
        }
        int addUp = minFirst+minSecond;
        interimResult += addUp;
        if(connectEdges.size() != 0)
            connectEdges.push(addUp);
        
    }
    return interimResult;
}
int main()
{
    std::vector<int> vecIn = {2,2,3,3};
    std::cout<< ConnectRopes(vecIn);
    return 0;
}
