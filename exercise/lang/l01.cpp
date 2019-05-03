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
    static IPv4 create(std::string address)
    {
        IPv4 ret(0, 0, 0, 0);
        std::vector<std::string> tokens;
        std::string token;
        std::istringstream tokenStream(address);
        while (std::getline(tokenStream, token, ','))
        {
            tokens.push_back(token);
        }
        for (int i = 0; i < tokens.size(); i++)
        {
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

    IPv4(unsigned int v)
    {
        data = {
            (unsigned char)((v>>24)&0xFF), 
            (unsigned char)((v>>16)&0xFF), 
            (unsigned char)((v>>8)&0xFF), 
            (unsigned char)(v&0xFF)};
    }

    unsigned int to_uint()
    {
        int v = (0xff & data[0]) << 24 | (0xff & data[1]) << 16 | (0xff & data[2]) << 8 | (0xff & data[3]);
        return v;
    }

    std::string to_string()
    {
        stringstream sstr;
        sstr << static_cast<int>(data[0]) << "."
             << static_cast<int>(data[1]) << "."
             << static_cast<int>(data[2]) << "."
             << static_cast<int>(data[3]);
        return sstr.str();
    }

    friend std::ostream &operator<<(std::ostream &os, IPv4 &obj)
    {
        os << obj.to_string();
        return os;
    }

    friend std::istream& operator>>(std::istream& is, IPv4 &obj)
    {
        char d1, d2, d3;
        int b1, b2, b3, b4;
        is >> b1 >> d1 >> b2 >> d2 >> b3 >> d3 >> b4;
        if (d1 == '.' && d2 == '.' && d3 == '.'){
            obj = IPv4(b1, b2, b3, b4);
        } else {
            cout << "ERROR:::";
            is.setstate(std::ios_base::failbit);
        }
        return is;
    }

    IPv4& operator++(){
        *this = IPv4(this->to_uint()+1);
        return *this;
    }
    IPv4& operator+(int v) {
        *this = IPv4(this->to_uint()+v);
        return *this;
    }
    friend bool operator==(IPv4& a1, IPv4& a2) {
        return a1.data == a2.data;
    }
    friend bool operator!=(IPv4& a1, IPv4& a2) {
        return !(a1 == a2);
    }
    friend bool operator<(IPv4& a1, IPv4& a2) {
        return a1.to_uint() < a2.to_uint();
    }
    friend bool operator>(IPv4& a1, IPv4& a2) {
        return a2< a1;
    }
    friend bool operator<=(IPv4& a1, IPv4& a2) {
        return !(a1 > a2);
    }
    friend bool operator>=(IPv4& a1, IPv4& a2) {
        return !(a1 < a2);
    }


};

int main(int argc, char **argv)
{
    IPv4 ip(127, 0, 0, 1);
    cout << ip.to_string() << endl;
    cout << ip.to_uint() << endl;

    IPv4 i(0,0,0,0); //= IPv4::create("127.0.0.1");
    cin >> i;
    i =i+12;
    cout << i.to_string() << endl;
    cout << i.to_uint() << endl;
    return 0;
}