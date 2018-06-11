

class Set {
public:
    virtual bool member(int) const = 0;

    virtual int operator[](int i) const = 0;

    virtual int length() const = 0;

    virtual bool operator< (const Set& other) const = 0;

    virtual bool operator* (const Set& other) const = 0;

    virtual Set& operator+=(const Set& other) = 0;
};

