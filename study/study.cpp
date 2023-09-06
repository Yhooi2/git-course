#include <iostream>
enum class Exception1 {
    devisionError,
    logError,
    sqrtError
};
enum class Exception2 {
    devisionError,
    logError
};
int division(const int& x, const int& y) {
    if (y != 0)
        return x / y;
    throw Exception1::devisionError;//std::runtime_error("Div 0"); // true/false, 12
}

int main()
{
    int x = 1, y = 1;
    std::cin >> x >> y;
    try {
        std::cout << division(x, y);
    }
    catch (Exception1 error) {
        if (error == Exception1::devisionError)
            std::cout << "Devision 0"<< std::endl;
        else if (error == Exception1::sqrtError)
            std::cout << "Sqrt error" << std::endl;
    }

    catch (std::logic_error& error) {
        std::cout << "Division 0 code logic error:" << std::endl << error.what() << std::endl;
        std::cout << typeid(error).name() << std::endl;

    }
    catch (std::exception& error) {//(std::logic_error& error) {//(const char* error) { //bool, int (...) - for everything
        std::cout << "Division 0 code exception error:" << std::endl << error.what() << std::endl;
        std::cout << typeid(error).name() << std::endl;
    }
    catch (int error) {
        std::cout << "Division 0 code intenger error:" << std::endl << std::endl;
        std::cout << typeid(error).name() << std::endl;
    }
    catch (bool error) {
        std::cout << "Division 0 code bool error:" <<std::endl << std::endl;
        std::cout << typeid(error).name() << std::endl;
    }
    catch (const char* error) {
        std::cout << "Division 0 code char error: " << std::endl;
        std::cout << typeid(error).name() << std::endl;
    }
    catch (...) {

    }
}
