Define the copy assignment operator for the following class so that an item assigned from another has its own separate storage.

```
class dataset {
    public:
        dataset() { data = new double[100]; } dataset(const dataset&);
        ~dataset() { delete [] data; } dataset& operator=(const dataset&);
    private:
        double* data = nullptr;
};
```
