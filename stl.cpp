#include<bits/stdc++.h> //this header includes all the library 


using namespace std ;
void explainPairs();
void explainVectors();
void explainLists();

int main(int argc, char const *argv[])
{
    // explainPairs();
    // explainVectors();
    explainLists();
    return 0;
}


void explainPairs() {
    pair<int ,int> a = {5,6};//this is how a simple pair is declared
    cout<<a.first<<","<<a.second<<"\n";

    pair<int,pair<int,int>> b ={5,{6,7}};
    cout<<b.first<<","<<b.second.second<<"\n";

    pair<int,int>arr[] = {{3,4},{5,6}};
    cout<<arr[0].second;
}

void explainVectors() {
    //vectors is the advanced version of the arrays they are used to make the things easier for us we can declare the size dynamically in the vectors 
    vector<int>v;//this is how to declare a vector 
    v.push_back(3);//this is how we can insert the elements in the vector 
    v.emplace_back(2);//emplace back is actually faster than the vectors 
    //vector of pairs
    vector<pair<int,int>>vec;
    vec.push_back({3,4});//this is how we insert the pair usingthe push back 
    vec.emplace_back(3,4);//this is same as above but in the emplace back this gonna understand by itseld 
    vector<int>v1(5,100); //this gonna make someting like (100,100...5 times)
    vector<int>v2(5);
    //there is this thing for reserving the memory
    vector<int>v3;
    v.reserve(10);//this gonnna reserver the memory for the elements but the size will be zero only 
    //this is how we are gonna copy a vector into the other vector 
    vector<int>v4(v2);//here we are copying the vector v2 into the vector v3

    //this is how we are gonna get the iterator (iterator is differennt from the pointer pointer is the memory location while the iterator is the traversal object which knows how to traverse inside a container)

    vector<int>::iterator it = v1.begin() ;//this is gonna point to the starting of the vector
    //traversing to the vector 
    //iterator follows the pointer arithmetic and the v.end points to one location after the last element 
    for(vector<int>::iterator it = v1.begin();it!=v.end();++it) {
        cout<<*(it);//we have to dereference this thing in here in order to make the things in here 

    }
    for(auto it = v1.begin();it!=v1.end();++it) {
        cout<<*(it);//we have to dereference this thing in here in order to make the things in here
    }
    //auto gonna deduce this thing automatically

    //this is the for each loop which is very easy and should be used 
    for(auto &it :v1) {
        cout<<it<<" ";
    }
    it = it+2;//moves two position ahead 
    auto it  = v1.end(); //points to one location ahead of the last element have to --it in order to access the last element 
    v1[0];//this is how to access the elemnt 


    //this is how to insert in the vector 
    vector<int>k(2,100);//(100,100)
    k.insert(v.begin(),300);//)(300,100,100)
    k.insert(v.begin()+1,2,50);//(300,50,50,100,100)
    v.size();//it gives the size 
    v.capacity();//this one gonna give the capacity how much is reserved before hand 

    //(10,20)
    k.pop_back();//this gonna remove the last element like this (10)


}