class stack{
    private:
        int length;
        int data[10];
    public:
        stack(); 
        int get_size();
        void push(int element);
        int pop();
};