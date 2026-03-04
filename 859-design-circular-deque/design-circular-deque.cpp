class MyCircularDeque {
public:
    vector<int> v;
    int front, back, sz, capacity;

    MyCircularDeque(int k) {
        v = vector<int>(k, -1);
        front = 0;
        back = 0;
        sz = 0; 
        capacity = k;
    }

    bool insertFront(int value) {
        if (isFull()) {
            return false;
        }

        if (front == 0) {
            front = capacity - 1; 
        } 
        else {
            front--; 
        }

        v[front] = value;

        sz++;
        return true;
    }

    bool insertLast(int value) {
        if (isFull()) {
            return false;
        }

        v[back] = value;

        if (back == capacity - 1) {
            back = 0; 
        } 
        else {
            back++; 
        }

        sz++;
        return true;
    }

    bool deleteFront() {
        if (isEmpty()) {
            return false;
        }

        v[front] = -1;

        if (front == capacity - 1) {
            front = 0; 
        } 
        else {
            front++; 
        }
        sz--;
        return true;
    }

    bool deleteLast() {
        if (isEmpty()) {
            return false;
        }

        if (back == 0) {
            back = capacity - 1;
        } 
        else 
        {
            back--; 
        }
        v[back] = -1;
        
        sz--;
        return true;
    }

    int getFront() {
        if (isEmpty()){return -1;}
        return v[front];
    }

    int getRear() {
        if (isEmpty()){return -1;} 
        if (back == 0) {
            return v[capacity - 1]; 
        } 
        else {
            return v[back - 1]; 
        }
    }

    bool isEmpty() { return (sz == 0); }

    bool isFull() { return (sz == capacity); }
};