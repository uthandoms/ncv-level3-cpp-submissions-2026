#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Create Product class
class Product {

private:
    // Private data members
    string productName;
    double price;
    int quantityInStock;

public:

    // Default constructor
    Product() {
        productName = "";
        price = 0.0;
        quantityInStock = 0;
    }

    // Setter methods

    void setProductName(string name) {
        if (name != "") {
            productName = name;
        }
        else {
            cout << "Product name cannot be empty!" << endl;
        }
    }

    void setPrice(double p) {
        if (p >= 0) {
            price = p;
        }
        else {
            cout << "Price cannot be negative!" << endl;
        }
    }

    void setQuantityInStock(int quantity) {
        if (quantity >= 0) {
            quantityInStock = quantity;
        }
        else {
            cout << "Quantity cannot be negative!" << endl;
        }
    }

    // Getter methods

    string getProductName() {
        return productName;
    }

    double getPrice() {
        return price;
    }

    int getQuantityInStock() {
        return quantityInStock;
    }

};

// Main program
int main() {

    // Create first product object
    Product product1;

    // Assign values using setters
    product1.setProductName("Wireless Mouse");
    product1.setPrice(249.99);
    product1.setQuantityInStock(15);

    // Create second product object
    Product product2;

    // Assign values using setters
    product2.setProductName("Computer Keyboard");
    product2.setPrice(399.99);
    product2.setQuantityInStock(20);

    // Display product information
    cout << fixed << setprecision(2);

    cout << "===== PRODUCT 1 =====" << endl;

    cout << "Product Name: "
         << product1.getProductName() << endl;

    cout << "Price: R"
         << product1.getPrice() << endl;

    cout << "Quantity in Stock: "
         << product1.getQuantityInStock() << endl;


    cout << "\n===== PRODUCT 2 =====" << endl;

    cout << "Product Name: "
         << product2.getProductName() << endl;

    cout << "Price: R"
         << product2.getPrice() << endl;

    cout << "Quantity in Stock: "
         << product2.getQuantityInStock() << endl;

    return 0;
}
