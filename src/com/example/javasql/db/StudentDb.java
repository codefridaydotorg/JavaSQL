/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.example.javasql.db;

import java.sql.Connection;
import java.sql.DriverManager;

/**
 *
 * @author apoorv
 */
public class StudentDb {
    static Connection con;
    static String driver = "com.mysql.jdbc.Driver";
    static String url = "jdbc:mysql://localhost/studentinfo";
    static String uname = "temp";
    static String password = "uhyS:6S\"MX";
    
    public static Connection getConnection() throws Exception{
        if(con == null){
        Class.forName(driver);
        con = DriverManager.getConnection(url, uname, password);
        }
        
        return con;
    }
}
