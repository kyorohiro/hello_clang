#include <iostream>
#include <array>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class IPv4
{
  private:
    std::array<unsigned char, 4> data;

  public:
    static IPv4 create(std::string address){
        IPv4 ret(0,0,0,0);
        std::vector<std::string> tokens;
        std::string token;
        std::istringstream tokenStream(address);
        while(std::getline(tokenStream, token, ',')){
            tokens.push_back(token);
        }
        for(int i=0;i<tokens.size();i++){
            ret.data[i] = std::stoi(tokens[i]);
        }
        return ret;
    }

  public:
    IPv4(unsigned char const a, unsigned char const b,
         unsigned char const c, unsigned char const d)
    {
        data = {a, b, c, d};
    }

    unsigned int to_uint()
    {
        int v = (0xff & data[0]) << 24 | (0xff & data[1]) << 16 | (0xff & data[2]) << 8 | (0xff & data[3]);
        return v;
    }

    std::string to_string()
    {
        stringstream sstr;
        cout << data[0];
        sstr
            << static_cast<int>(data[0]) << "."
            << static_cast<int>(data[1]) << "."
            << static_cast<int>(data[2]) << "."
            << static_cast<int>(data[3]);
        return sstr.str();
    }
};

int main(int argc, char **argv)
{
    IPv4 ip(127, 0, 0, 1);
    cout << ip.to_string() << endl;
    cout << ip.to_uint() << endl;

    IPv4 i = IPv4::create("127.0.0.1");
    cout << i.to_string() << endl;
    cout << i.to_uint() << endl;

    return 0;
}