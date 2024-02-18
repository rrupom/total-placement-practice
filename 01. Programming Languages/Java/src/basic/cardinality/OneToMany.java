package basic.cardinality;

import java.util.ArrayList;

/**
 * Here course and student relationship is implemented. Many students can take
 * one course. So the cardinality of Course and Student relationship is
 * one-to-many
 */

class Student {
    private String firstName;
    private String lastName;
    private final int id;
    private static int count;

    public Student(String firstName, String lastName) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.id = ++count;
    }

    public String getFirstName() {
        return this.firstName;
    }

    public String getLastName() {
        return this.lastName;
    }

    public int getId() {
        return this.id;
    }

}

class Course {
    private final int id;
    private String name;
    public static final int max_strudents = 100;
    private ArrayList<Student> enrolledStudents;
    private int numStudents;

    public Course(String name, int courseId) {
        this.id = courseId;
        this.name = name;
        enrolledStudents = new ArrayList<Student>();
    }

    public void enrollStudent(Student student) {
        enrolledStudents.add(student);
    }

    public void printAllStudents() {
        for (Student student : enrolledStudents) {
            System.out.println("First Name: " + student.getFirstName() + " Last Name: " + student.getLastName()
                    + " Student ID: " + student.getId());
        }
    }

}

public class OneToMany {
    public static void main(String[] args) {
        Course cse121 = new Course("Data Structure", 121);

        Student rakib = new Student("Rakib", "Talukder");

        cse121.enrollStudent(rakib);
        Student shawn = new Student("Marajul", "Islam");
        cse121.enrollStudent(shawn);
        cse121.printAllStudents();
    }
}
