class Empty {
    public:
        Empty(){}//default constructed
        Empty(const Empty& rhs) {}//copy constructed
        ~Empty(){} //destructed
        Empty& operator=(const Empty&rhs){}//copy assignment
};