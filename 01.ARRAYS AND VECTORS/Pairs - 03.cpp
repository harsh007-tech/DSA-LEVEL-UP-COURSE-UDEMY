//Problems:
// 1. ADDING THE ELEMENT TO HASH SET AT RIGHT TIME
// 2.THERE SHOULD BE A RETURN AT THE END OR IT GIVES ERROR
// 3.FINDING THE INDEX OF QUERY
// 4.TO FIND AN ELEMENT IN UNORDERED SET
//TIME COMPLEXITY O(N)
class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {  //Declaration of extra memory.
         vector<int> result;
        unordered_set<int> lookupTable;
        int query;
        
        //  Iterating through the vector. 
            for(int i=0;i<nums.size();i++)
            {
                 query = target-nums[i];
                    //Logic for finding the query.
                    if( lookupTable.find(query)!=lookupTable.end() )
                        {
                            
                            result.push_back(i);
                             
                           break;
                        }
                //Creating the look up table.    
                lookupTable.insert(nums[i]);
            }
        
                //Finding the index of query
                for(int i=0;i<nums.size();i++)
                {
                    if(query == nums[i])
                    { result.push_back(i);
                    break;}   
                }
         return result;
    }
};
