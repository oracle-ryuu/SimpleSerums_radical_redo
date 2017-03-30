
/***** Patients *****/
insert into PATIENT(p_ssn, p_name, p_dob, p_address, p_sex, 
	p_phone, p_insurance, p_insurance_num, p_doctor)
values (891199992,'Nathan Summers','1978-06-04','4233 Alexandria Pl. Long Beach, CA 90815','M',5623347890,'Blue Shield',00001,891100000);

insert into PATIENT(p_ssn, p_name, p_dob, p_address, p_sex, 
	p_phone, p_insurance, p_insurance_num, p_doctor)
values (891199993,'Tony Stark','1973-09-11','1090 Lincoln Ave. Long Beach, CA 90815','M',5625558890,'Blue Shield',00002,891100001);

insert into PATIENT(p_ssn, p_name, p_dob, p_address, p_sex, 
	p_phone, p_insurance, p_insurance_num, p_doctor)
values (891199994,'Bruce Banner','1969-05-20','1213 Birch St. Long Beach, CA 90815','M',5625552342,'Blue Shield',00003,891100002);

insert into PATIENT(p_ssn, p_name, p_dob, p_address, p_sex, 
	p_phone, p_insurance, p_insurance_num, p_doctor)
values (891199999,'Stephen Strange','1965-07-13','423 Park Pl. Long Beach, CA 90815','M',5625556688,'Blue Shield',00004,891100003);

insert into PATIENT(p_ssn, p_name, p_dob, p_address, p_sex, 
	p_phone, p_insurance, p_insurance_num, p_doctor)
values (891199998,'Jessica Jones','1987-04-22','1425 Broadway Pl. Long Beach, CA 90815','F',5625558543,'Blue Shield',00005,891100004);

insert into PATIENT(p_ssn, p_name, p_dob, p_address, p_sex, 
	p_phone, p_insurance, p_insurance_num, p_doctor)
values (891199997,'Luke Cage','1974-10-12','1919 Anaheim St. Long Beach, CA 90815','M',5625551022,'Blue Shield',00006,891100000);

insert into PATIENT(p_ssn, p_name, p_dob, p_address, p_sex, 
	p_phone, p_insurance, p_insurance_num, p_doctor)
values (891199996,'Matt Murdock','1984-09-29','4192 Cypress Ave. Long Beach, CA 90815','M',5625559275,'Blue Shield',00007,891100000);

insert into PATIENT(p_ssn, p_name, p_dob, p_address, p_sex, 
	p_phone, p_insurance, p_insurance_num, p_doctor)
values (891199995,'Daniel Rand','1980-12-01','1192 Pacific Ave. Long Beach, CA 90815','M',5625557823,'Blue Shield',00008,891100000);

/***** Staff *****/
insert into STAFF(s_ssn, s_login, s_password, s_name, s_title, s_address, s_phone)
values (891100000,'wolverine','password','Logan Howlett','Dr','2636 Michaealangelo Dr. Long Beach, CA 90815',2095550123);

insert into STAFF(s_ssn, s_login, s_password, s_name, s_title, s_address, s_phone)
values (891100001,'phoenix','password','Jean Grey','Dr','1929 Pershing Ave. Long Beach, CA 90815',2095551234);

insert into STAFF(s_ssn, s_login, s_password, s_name, s_title, s_address, s_phone)
values (891100002,'cyclops','password','Scott Summers','Dr','2324 March Ln. Long Beach, CA 90815',2095552345);

insert into STAFF(s_ssn, s_login, s_password, s_name, s_title, s_address, s_phone)
values (891100003,'magneto','password','Erik Lensher','Dr','5436 Feather River Way Dr. Long Beach, CA 90815',2095553456);

insert into STAFF(s_ssn, s_login, s_password, s_name, s_title, s_address, s_phone)
values (891100004,'gambit','password','Remy LeBeau','Dr','1122 Hammer Ln. Long Beach, CA 90815',2095554567);


/***** Items *****/
insert into ITEM(i_id, i_name, i_count)
values (00000,'Fentanyl',1000);

insert into ITEM(i_id, i_name, i_count)
values (00001,'Hydrocodone',1000);

insert into ITEM(i_id, i_name, i_count)
values (00002,'Oxycodone',1000);

insert into ITEM(i_id, i_name, i_count)
values (00003,'Oxymorphone',1000);

insert into ITEM(i_id, i_name, i_count)
values (00004,'Propoxyphene',1000);

insert into ITEM(i_id, i_name, i_count)
values (00005,'Hydromorphone',1000);

insert into ITEM(i_id, i_name, i_count)
values (00006,'Meperidine',1000);

insert into ITEM(i_id, i_name, i_count)
values (00007,'Diphenoxylate',1000);

insert into ITEM(i_id, i_name, i_count)
values (00008,'Morphine',1000);

insert into ITEM(i_id, i_name, i_count)
values (00009,'Insulin',1000);

/***** Consults *****/
insert into CONSULT(c_patient, c_appointment, c_description)
values (891199999,'1999-12-31 08:00:00','Patient complained of stubbed toe. prescribed 30 morphine');

insert into CONSULT(c_patient, c_appointment, c_description)
values (891199998,'1999-12-31 08:30:00','Patient complained of arm pain. prescribed 30 insulin');

insert into CONSULT(c_patient, c_appointment, c_description)
values (891199997,'1999-12-31 09:00:00','Patient complained could not sleep. prescribed 30 oxycodone');

insert into CONSULT(c_patient, c_appointment, c_description)
values (891199996,'1999-12-31 09:30:00','Patient complained they had bad breath. prescribed 30 hydromorphone');

insert into CONSULT(c_patient, c_appointment, c_description)
values (891199995,'1999-12-31 10:00:00','Patient complained they lost feeling in their ears. prescribed 30 propoxyphene');

insert into CONSULT(c_patient, c_appointment, c_description)
values (891199994,'1999-12-31 10:30:00','Patient complained of sore throat. prescribed 30 oxymorphone');

insert into CONSULT(c_patient, c_appointment, c_description)
values (891199993,'1999-12-31 11:00:00','Patient complained their arm was missing. prescribed 30 meperidine');

insert into CONSULT(c_patient, c_appointment, c_description)
values (891199992,'1999-12-31 11:30:00','Patient complained they were too tired to work. prescribed 30 fentanyl');

/***** Prescriptions *****/
insert into PRESCRIPTION(pre_patient,pre_item,pre_appointment,pre_amount)
values (891199999,00008,'1999-12-31 08:00:00',30);

insert into PRESCRIPTION(pre_patient,pre_item,pre_appointment,pre_amount)
values (891199998,00009,'1999-12-31 08:30:00',30);

insert into PRESCRIPTION(pre_patient,pre_item,pre_appointment,pre_amount)
values (891199997,00002,'1999-12-31 09:00:00',30);

insert into PRESCRIPTION(pre_patient,pre_item,pre_appointment,pre_amount)
values (891199996,00005,'1999-12-31 09:30:00',30);

insert into PRESCRIPTION(pre_patient,pre_item,pre_appointment,pre_amount)
values (891199995,00004,'1999-12-31 10:00:00',30);

insert into PRESCRIPTION(pre_patient,pre_item,pre_appointment,pre_amount)
values (891199994,00003,'1999-12-31 10:30:00',30);

insert into PRESCRIPTION(pre_patient,pre_item,pre_appointment,pre_amount)
values (891199993,00006,'1999-12-31 11:00:00',30);

insert into PRESCRIPTION(pre_patient,pre_item,pre_appointment,pre_amount)
values (891199992,00000,'1999-12-31 11:30:00',30);