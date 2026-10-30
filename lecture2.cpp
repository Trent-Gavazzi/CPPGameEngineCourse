#include <iostream>
#include <string>
#include <fstream>
#include <vector>
class Student
{
    std::string m_first;
    std::string m_last;
    int         m_id;
    float       m_avg;
    public:
        Student () {}

        Student(std::string first, std::string last, int id, float avg)
        : m_first   (first)
        , m_last    (last)
        , m_id      (id)
        , m_avg     (avg)
        {
        }

        int getAvg() const
        {
            return m_avg;
        }

        int getID() const
        {
            return m_id;
        }

        std::string getFirst() const 
        {
            return m_first;
        }

        std::string getLast() const
        {
            return m_last;
        }

        void print() const
        {
            std::cout << m_first << " " << m_last << " " <<  m_id << " " << m_avg <<'\n';
        }
};

class Course
{
    std::string m_name = "Course";
    std::vector<Student> m_students;    

    public:

        Course() {}

        Course(const std::string& name)
            : m_name(name)
        {
        }
    
        void addStudent(const Student& s)
        {
            m_students.push_back(s);
        }
        
        // First const means return cannot be changed
        // Second means the fucntion can't change the object
        const std::vector<Student> getStudents() const
        {
            return m_students;
        }
        
        void loadFromFile(const std::string& filename)
        {
           std::ifstream fin(filename); 
           std::string first, last;
           int id;
           float avg;

           while (fin >> first)
           {
                fin >> last >> id >> avg;
                addStudent(Student(first, last, id, avg));
           }
        }

        // In for loops if we can iterate the address to save memory
        void print() const
        {
            for(auto& s : m_students)
            {
                s.print();
            }
        }


};


int main(int argc, char * argv[])
{
    
    Course c("COP4300");
    c.loadFromFile("students.txt");
    c.print();
    return 0;
}