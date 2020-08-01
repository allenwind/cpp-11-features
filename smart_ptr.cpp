#include <iostream>
#include <memory>

using namespace std;

/*
std::unique_ptr better than auto_ptr
std::shared_ptr
std::weak_ptr
*/

class PtrMessage
{
private:
    string name;

public:
    PtrMessage(const string n) : name(n)
    {
        cout << name << " " << "object created" << endl;
    }

    ~PtrMessage()
    {
        cout << name << " " << "object deleted" << endl;
    }
};

int main(int argc, char ** argv)
{
    {
        // 独占型的智能指针
        // 不允许拷贝和赋值
        unique_ptr<PtrMessage> ptr(new PtrMessage("unique_ptr"));
        // unique_ptr<PtrMessage> ptr2 = ptr; is error
        // C++14 support make_unique
        // auto ptr = make_unique<PtrMessage>("unique_ptr");
    }

    {
        // shared_ptr 使用引用计数
        shared_ptr<PtrMessage> ptr1(new PtrMessage("shared_ptr"));
        shared_ptr<PtrMessage> ptr2 = ptr1; // count +1
        shared_ptr<PtrMessage> ptr3 = ptr2; // count +1
    }

    // make_shared
    {
        auto ptr1 = make_shared<PtrMessage>("make_shared");
        auto ptr2 = ptr1; // count +1
        auto ptr3 = ptr2; // count +1
        PtrMessage * ptr4 = ptr1.get(); // 获取裸指针
    }
}