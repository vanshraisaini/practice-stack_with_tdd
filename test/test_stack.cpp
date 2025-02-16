#include "my_stack/my_stack.h"
#include <stdexcept>
#include "gtest/gtest.h"

TEST(MyFirstStack, FirstStackTest) {
    stack my_stack;   
    EXPECT_EQ(my_stack.get_size(),0);
}

TEST(MyFirstStack, FirstPush) {
    stack my_stack;   
    my_stack.push(1);
    EXPECT_EQ(my_stack.get_size(),1);
}

TEST(MyFirstStack, TwoPushes) {
    stack my_stack;   
    my_stack.push(1);
    EXPECT_EQ(my_stack.get_size(),1);
    my_stack.push(-1);
    EXPECT_EQ(my_stack.get_size(),2);
}

TEST(MyFirstStack, FirstPop) {
    stack my_stack;   
    my_stack.push(1);
    EXPECT_EQ(my_stack.get_size(),1);
    EXPECT_EQ(my_stack.pop(),1);
    EXPECT_EQ(my_stack.get_size(),0);
}

TEST(StackException, Underflow) {
    stack my_stack;   
    EXPECT_THROW(my_stack.pop(),std::runtime_error);
}

TEST(StackException, Overflow) {
    stack my_stack;   
    for(int i = 0;i<10;i++){
        my_stack.push(1);
    }
    EXPECT_EQ(my_stack.get_size(),10);
    EXPECT_THROW(my_stack.push(1),std::runtime_error);
}
