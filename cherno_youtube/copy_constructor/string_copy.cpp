#include <iostream>
#include <string>

class String
{
private:
  char *m_Buffer;
  unsigned int m_Size;

public:
    String(const char *string)
    {
      m_Size = strlen(string);
      m_Buffer = new char[m_Size + 1];  // For null terminater
      memcpy(m_Buffer, string, m_Size);  // We are not adding one to m_Size here unless we're sure the string ends with a null terminater.
      m_Buffer[m_Size] = 0;
      // for (int i=0; i<m_Size; i++)
      //     m_Buffer[i] = string[i];
      
    }

    // destructor
    ~String()
    {
        delete[] m_Buffer;
    }
  // Want to be able to output using cout
  // C++ is able to input and output the built-in data types
  // using the stream extraction operator >>
  // and the stream insertion operator <<.
  // The stream insertion and stream extraction operators
  //also can be overloaded to perform input and output for user-defined types like an object.
  friend std::ostream &operator<<(std::ostream &stream, const String &string);
};

std::ostream &operator<<(std::ostream &stream, const String &string)
{
  stream << string.m_Buffer;
  return stream;
}

int main()
{
  String string = "Cherno";
  std::cout << string << std::endl;
  std::cin.get();
}