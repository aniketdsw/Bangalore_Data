#include <bits/stdc++.h>
// BFS_non_recursive - iterative
//stack<int> special_stack_for_iterative;

/**
 * @brief      { function_description }
 *
 * @param[in]  start  { parameter_description }
 */
void BFS_non_recursive(int start)
{
    visited[start]=true;
    queue<int> q;
    q.push(start);

    while(!q.empty())
    {
        int v = q.front();
      // special_stack_for_iterative.push(v);
        q.pop();

        for(int i = 0; i<adj[v].size(); i++)
        {
            if(visited[adj[v][i]]==false)
            {
                visited[adj[v][i]]=true;
                q.push(adj[v][i]);
            }
        }
    }

//        cout<<" Connected component 
";
//    while(!special_stack_for_iterative.empty())
//    {
//        cout<<" "<<special_stack_for_iterative.top()<<" ";
//        special_stack_for_iterative.pop();
//
//    }
//    cout<<endl;

}

int main(int argc, char const *argv[])
{
	for (int i = 0; i < count; ++i)
	{
		/* code */
	
	}
   if()
   {
   	 if (/* condition */)
   	 {
   	 	/* code */
   	 }
   }
   // BFS_non_recursive - iterative
   //stack<int> special_stack_for_iterative;
   
   	return 0;
}