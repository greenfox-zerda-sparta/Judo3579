using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.SQLite;

namespace ConsoleApplication6
{
    class TableCreator
    {
        private string commandText;
        private SQLiteConnection dbConnection;
        private SQLiteCommand command;
        private SQLiteDataReader reader;

        public TableCreator()
        {
            SQLiteConnection.CreateFile("emails.sqlite");
            dbConnection = new SQLiteConnection("DataSource=emails.sqlite");
            dbConnection.Open();

            commandText = "create table Emails (id int, subject varchar(40))";
            command = new SQLiteCommand(commandText, dbConnection);
            command.ExecuteNonQuery();

            commandText = "insert into Emails (id, subject) values ('512', 'party')";
            command = new SQLiteCommand(commandText, dbConnection);
            command.ExecuteNonQuery();

            dbConnection.Close();
        }


            public void SelectFromDatabase()
        {
            dbConnection.Open();
            commandText = "select * from Emails order by id desc";
            command = new SQLiteCommand(commandText, dbConnection);
            reader = command.ExecuteReader();

            while(reader.Read())
            {
                Console.WriteLine($"From {reader["id"]} + \tTo {reader["subject"]}");
            }
        }
    }
}
