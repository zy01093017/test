
#include <gtest/gtest.h>
#include <iostream>
using namespace std;


TEST(test1,test)
{

  cout <<"hello1"<<endl;
}


TEST(test1,test1)
{

  cout <<"hello1"<<endl;
}

  int main(int argc,char* argv[])
{
  testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}
