#include <iostream>
#include <iomanip>
using namespace std;

class Compressor {
public:
    virtual double compress(double fileSize) {
        return fileSize;
    }
    virtual ~Compressor() = default;
};

class TextCompressor : public Compressor {
public:
    double compress(double fileSize) override {
        return fileSize * 0.40;
    }
};

class ImageCompressor : public Compressor {
public:
    double compress(double fileSize) override {
        return fileSize * 0.70;
    }
};

int main() {
    double size;
    cout << "Enter original file size (MB): ";
    cin >> size;

    if (size < 0) {
        cout << "File size cannot be negative." << endl;
        return 1;
    }

    TextCompressor text;
    ImageCompressor image;
    cout << fixed << setprecision(2);
    cout << "Original file size: " << size << " MB" << endl;
    cout << "Compressed text file size: " << text.compress(size) << " MB" << endl;
    cout << "Compressed image file size: " << image.compress(size) << " MB" << endl;
    return 0;
}
