/*
Directions for sqlite3:

1) Download the appropriate binary for SQLite3 and place it in the same directory as the other cpp files.

2) open SQLite3 (should be a terminal) and type these commands individually:
	.read tables.sql
	.read initial_records.sql
	.save the_database.db
	.exit
3) the_database.db now has all the records stored. When using QT we will be opening that database through SQLite and performing the functions we need

*/
create table PATIENT(
	p_ssn numeric(10) not null,
	p_name varchar(20) not null,
	p_dob date not null,
	p_address varchar(60) not null,
	p_sex char(1) not null,
	p_phone numeric(10) not null,
	p_insurance varchar(15) not null,
	p_insurance_num numeric(10) not null,
	p_doctor numeric(9) not null,
	primary key(p_ssn),
	foreign key(p_doctor) references STAFF(s_ssn)
);

create table STAFF(
	s_ssn numeric(9) not null, 
	s_login varchar(15) not null,
	s_password varchar(15) not null,
	s_name varchar(20) not null,
	s_title varchar(15) not null,
	s_address varchar(60) not null,
	s_phone numeric(10) not null,
	primary key(s_ssn)

);

create table ITEM(
	i_id numeric(5) not null,
	i_name varchar(20) not null,
	i_count numeric(5) not null,
	primary key(i_id)
);

create table CONSULT(
	c_patient numeric(9) not null,
	c_appointment timestamp not null,
	c_description varchar(300) not null,
	primary key (c_patient,c_appointment),
	foreign key (c_patient) references PATIENT(p_ssn)
);

/* weak entity */
create table PRESCRIPTION(
	pre_patient numeric(10) not null,
	pre_item numeric(5) not null,
	pre_appointment timestamp not null,
	pre_amount numeric(3) not null,
	primary key (pre_patient,pre_item,pre_appointment),
	foreign key (pre_patient) references CONSULT(c_patient),
	foreign key (pre_item) references ITEM(i_id),
	foreign key (pre_appointment) references CONSULT(c_appointment)
);
