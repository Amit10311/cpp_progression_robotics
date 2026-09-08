#include <iostream>
#include <memory>
class Camera
{
public:
    void start()
    {
        std::cout << "Camera started" << std::endl;
    }

   void close(){
        std::cout << "Camera closed" << std::endl;

   }
};

int main()
{
    // old Version
    int *rawPtr = new int(10);
    delete rawPtr;
    rawPtr = nullptr;

    // auto ptr = std::make_unique<int>(10);
    std::unique_ptr<int> ptr = std::make_unique<int>(10);
    std::cout << "ptr : " << *ptr << std::endl;

    // shared_ptr - shared ownership
    std::shared_ptr<Camera> cam = std::make_shared<Camera>();
    std::shared_ptr<Camera> cam2 = cam;

    cam->start();
    cam2->close();

    return 0;
}