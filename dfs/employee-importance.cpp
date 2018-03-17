/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        
       int imp = 0;
       Employee* next;
       for(int i = 0;i < employees.size();i++) {
       		if(id == employees[i]->id) {
       			next = employees[i];
                imp = next->importance;
       			break;
       		}
       }
       for(int i = 0;i < (next->subordinates).size();i++) {
    		for(int j = 0;j < employees.size();j++) {
    			if(employees[j]->id == next->subordinates[i]) {
    				imp += getImportance(employees,employees[j]->id);
    				break;
    			}
    		}
       }
       return imp;
    }
};