CREATE DATABASE coonect_java;

use coonect_java;
CREATE TABLE student(
roll_no int primary key,
name varchar(50),
marks int not null
);


insert into student
values
(01,"umair",8),
(03,"danish",11),
(05,"uzair",18);


select* from student;


create database register_info;
use register_info;

create Table data(
id int primary key,
name varchar(50),
email varchar(50) unique,
Gende varchar(50),
pass int not null
);


SET SQL_SAFE_UPDATES=0; 
ALTER TABLE data 
DROP COLUMN email;

Alter Table data
Modify pass varchar(50);

Alter Table data
Add column date varchar(10);

Alter Table data
Modify date varchar(50);
ALTER TABLE data
ADD column email varchar(50) unique;

Select * from data;
select date from data where email="umiii@gmail.com";


insert into data (name,Gende,pass,email,date) values();
CREATE DATABASE Register_labour;
Drop database data;

use Register_labour;
Create table Mazdoor_data
(
name varchar(50),
age varchar(50),
Cnic varchar(50),
pass varchar(50),
phone varchar(50),
address varchar(50),
skill varchar(50)
);

insert into Mazdoor_data 
(name,age,pass)
values
("jatt","28","215020");
insert into Mazdoor_data 
(name,age,Cnic,pass,phone,address,skill) 
values
("umair","20","457948545","215020","03133300758","afzal shah town","skilled");

Drop table Mazdoor_data;

select * from Mazdoor_data;

-- alter table Mazdoor_data
-- alter column Cnic where Cnic=;

insert into Mazdoor_data 
(Cnic)
values
(Cnic+1);

select Cnic from Mazdoor_data where name="umair";

select * from Mazdoor_data where address="afzal shah town"  or cnic="457948545";
select Cnic from Mazdoor_data where Cnic="7878976689";

create database umiii;
use umiii;

create table stude(
id int,
name varchar(50),
age int  not null
);


insert into stude 
(id,name,age)
values
(01,"hello",454),
(04,"umii",554),
(05,"hi",54),
(07,"world",354);

select * from stude;
select * from stude order by id desc;
select * from stude where age between 50 and 100;
select * from stude where id in (05,07,08) limit 1;

Drop database if exists register_labour;
Create database register_labour;
use register_labour;

Create table Mazdoor_data
(
name varchar(50),
age varchar(2),
Cnic varchar(50),
pass varchar(50),
phone varchar(50),
address varchar(50),
skill varchar(50),
account_no varchar(50),
Bank_name varchar(50),
working_day varchar(50),
work_time varchar(2)
);

insert into Mazdoor_data 
(name,age,Cnic,pass,phone,address,skill,account_no,Bank_name,working_day,work_time)
values
("jatt","26","6487452","umiii908","03133300758","afzal shah town","unskilled","5647383","alfalah","0","8");

select* from Mazdoor_data;
select Cnic,account_no from Mazdoor_data where Cnic="64875634" or account_no="5647383";

Drop table Mazdoor_data;
select * from Mazdoor_data;
alter table Mazdoor_data
modify column working_day varchar ;
insert into Mazdoor_data 
(working_day)
values
(working_day+1)
where Cnic="4564578";

select Cnic, account_no from Mazdoor_data where Cnic="878655" or account_no="746534785";
select Bank_name, count(Cnic) from Mazdoor_data group by Bank_name  order by Bank_name Asc;

select skill,count(name) from Mazdoor_data
group by skill
having max(work_time)>5
order by skill asc; 
use register_labour;
select mode, count(cus_id) from payment_method
group by mode;
select * from Mazdoor_data; 
36895649564
36895649564
454028253309
select grade, count(roll) from class
group by grade
order by grade asc; 
use register_labour;
Select * from Mazdoor_data;
truncate table Mazdoor_data;

SET SQL_SAFE_UPDATES=0;
update Mazdoor_data
set working_day=working_day+1
where Cnic="454028253309";

SELECT address from Mazdoor_data
group by address
HAVING MAX(Working_day)>=5
order by address;

Create database using_fk;
use using_fk;
Create Table dept(
id int primary key,
name varchar(50)
);

create Table student(
id int primary key,
name varchar(50),
cus_id int ,
FOREIGN key(cus_id)  references dept(id)
on update CASCADE 
on delete CASCADE
);

drop table student;
insert into dept values(12,"english");
insert into student values(34,"umiii",12);
SET SQL_SAFE_UPDATES=0;

update dept
set id=20
where id=12;
select * from dept;
select * from student;

use register_labour;
select * from Mazdoor_data;
update Mazdoor_data
set working_day=0;

alter table Mazdoor_data
add Column Timing_cal varchar(2);
SET SQL_SAFE_UPDATES=0;
alter table Mazdoor_data
add column non_working_day varchar(50);
alter table Mazdoor_data
drop column Bank_name;

alter table Mazdoor_data
add column payment_platform varchar(50); 

use register_labour;
select * from Mazdoor_data;
454028253309
truncate Mazdoor_data;
insert into Mazdoor_data (Bank_user_name,Account_no,payment_platform) 

values 
("alfalah","4673489634","jazzcash")
where Cnic="454028253309";


SET SQL_SAFE_UPDATES=0;
update  Mazdoor_data
set Bank_user_name="alfalah" where Cnic="454028253309";
truncate Mazdoor_data;
select * from Mazdoor_data;
alter table Mazdoor_data
Drop column Timing_cal;

alter table Mazdoor_data 
Drop Cnic="4540282533098";
delete from Mazdoor_data
where Cnic="4540282533098";
use register_labour;
select * from Mazdoor_data;

truncate Mazdoor_data;

CREATE DATABASE IF NOT EXISTS DEMO ;
use DEMO;

create table hello(
id int primary key,
name varchar(50),
age int not null 
);

select * from hello;

insert into world values (17,"uziiii",45,"nawabshah");

alter table hello
add column city varchar(10);


select * from world;
alter table hello
rename world;


alter table world
modify column age varchar(2);

alter table world 
drop column city;
use demo;

alter table world
change age stu_age varchar(2);
select * from world;


create table heloo(
name varchar(50),
dept varchar(50),
salary varchar(10)
);

select * from heloo;
insert into heloo values("danish","electrical ","8239595");

select * from world 
left join heloo
on world.name=heloo.name
union 
select * from world 
right join heloo
on world.name=heloo.name;

use register_labour;
select * from Mazdoor_data;
truncate Mazdoor_data;
alter table Mazdoor_data 
drop column non_working_day;

alter table Mazdoor_data
add column non_working_day varchar(50);
use demo;
uziii 
uziiii
select * from heloo;
select * from world;

select * from heloo as h
left join world as w
on h.name=w.name
where w.name is NULL
UNION 
select * from heloo as h
right join world as w
on h.name=w.name
where h.name is NULL;

use xyz;

select * from data;
select name,id from data
where id in (select id from data where id%2!=0);















