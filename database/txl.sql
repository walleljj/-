/*
Navicat MySQL Data Transfer

Source Server         : keshe
Source Server Version : 50173
Source Host           : localhost:3306
Source Database       : txl

Target Server Type    : MYSQL
Target Server Version : 50173
File Encoding         : 65001

Date: 2018-12-26 16:32:32
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for class
-- ----------------------------
DROP TABLE IF EXISTS `class`;
CREATE TABLE `class` (
  `classId` int(11) NOT NULL,
  `cName` varchar(255) DEFAULT NULL,
  `number` int(11) DEFAULT NULL,
  `monitor` varchar(255) DEFAULT NULL,
  `teacher` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`classId`),
  KEY `mo` (`monitor`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of class
-- ----------------------------
INSERT INTO `class` VALUES ('1001', '软件工程一班', '30', '张玉林', '赵付青');
INSERT INTO `class` VALUES ('1002', '软件工程二班', '30', '李小鹏', '啦啦啦');

-- ----------------------------
-- Table structure for massage
-- ----------------------------
DROP TABLE IF EXISTS `massage`;
CREATE TABLE `massage` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `sno` int(11) NOT NULL,
  `classId` int(11) NOT NULL,
  `name` varchar(255) DEFAULT NULL,
  `sex` varchar(255) DEFAULT NULL,
  `card` varchar(255) DEFAULT NULL,
  `adress` varchar(255) DEFAULT NULL,
  `phone` varchar(255) DEFAULT NULL,
  `emial` varchar(255) DEFAULT NULL,
  `post` varchar(255) DEFAULT NULL,
  `photo` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`,`sno`,`classId`),
  KEY `class` (`classId`),
  KEY `stu` (`sno`),
  CONSTRAINT `class` FOREIGN KEY (`classId`) REFERENCES `class` (`classId`),
  CONSTRAINT `stu` FOREIGN KEY (`sno`) REFERENCES `student` (`sno`)
) ENGINE=InnoDB AUTO_INCREMENT=1063 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of massage
-- ----------------------------
INSERT INTO `massage` VALUES ('1003', '1616270101', '1001', '李想', '男', 'null', '陕西西安', '17693210702', '15332477223', '743400', 'K:/头像/002.jpg');
INSERT INTO `massage` VALUES ('1004', '1616270102', '1001', '刘杰', '男', 'null', '陕西咸阳', '17361563911', '18392643919', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1005', '1616270103', '1001', '王克俭', '男', 'null', '辽宁朝阳', '18693251946', '18242173063', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1006', '1616270104', '1001', '刘铁辉', '男', 'null', '辽宁北票', '17693125015', '15754221127', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1007', '1616270105', '1001', '王勇帅', '男', 'null', '陕西宝鸡', '17361563928', '13150133555', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1008', '1616270106', '1001', '刘宝科', '男', 'null', '甘肃平凉', '18693250738', '18793363239', '743400', 'K:/头像/001.jpg');
INSERT INTO `massage` VALUES ('1009', '1616270107', '1001', '王广志', '男', 'null', '甘肃金昌', '17361563938', '15095320622', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1010', '1616270108', '1001', '白宝宝', '男', 'null', '甘肃静宁', '17361563948', '15349332233', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1011', '1616270109', '1001', '李俊杰', '男', 'null', '甘肃静宁', '18993337191', '18793326380', '743400', 'K:/头像/005.jpg');
INSERT INTO `massage` VALUES ('1012', '1616270110', '1001', '白浩谋', '男', 'null', '甘肃榆中', '17693166798', '15002535630', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1013', '1616270111', '1001', '朱海熊', '男', 'null', '甘肃靖远', '17361563968', '15193050528', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1014', '1616270112', '1001', '张帅帅', '男', 'null', '甘肃静宁', '17361563977', '15593316723', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1015', '1616270113', '1001', '贾旺军', '男', 'null', '甘肃定西', '17693169695', '15683975728', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1016', '1616270114', '1001', '李子哲', '男', 'null', '甘肃金昌', '18809494121', '15025995983', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1017', '1616270115', '1001', '李增强', '男', 'null', '甘肃通渭', '18894001963', '18793250036', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1018', '1616270116', '1001', '窦长兴', '男', 'null', '甘肃通渭', '18894001883', '18794955269', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1019', '1616270117', '1001', '陈学凯', '男', 'null', '甘肃张掖', '17361564011', '13399445181', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1020', '1616270119', '1001', '陈振鑫', '男', 'null', '甘肃庆阳', '13369347988', '18152276788', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1021', '1616270120', '1001', '刘成发', '男', 'null', '甘肃武威', '15769396375', '15095618455', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1022', '1616270121', '1001', '廖鹿', '男', 'null', '甘肃陇南', '17361564028', '18409441706', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1023', '1616270122', '1001', '陈玉杰', '男', 'null', '甘肃张掖', '17361564033', '17693133026', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1024', '1616270123', '1001', '马良', '男', 'null', '甘肃张掖', '17361564038', '17693241801', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1025', '1616270124', '1001', '詹富德', '男', 'null', '甘肃张掖', '17361564048', '15294613610', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1026', '1616270125', '1001', '张世凯', '男', 'null', '甘肃张掖', '18419161771', '15248316773', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1027', '1616270126', '1001', '张玉林', '男', 'null', '湖南邵阳', '15773954542', '13873957425', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1028', '1516270125', '1001', '金彤辉', '男', 'null', '湖北天门', '17361566986', '15972293229', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1029', '1601110144', '1001', '刘宏旺', '男', 'null', '甘肃陇南', '15693052849', '13993951443', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1030', '1603430130', '1001', '赵子初', '男', 'null', '山东青州', '18263603002', '15165678617', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1031', '1607550160', '1001', '曹倩', '女', 'null', '山西平遥', '17361565141', '13994550468', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1032', '1607560117', '1001', '张文豪', '男', 'null', '陕西咸阳', '17693455843', '13892032145', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1033', '1616270127', '1002', '曾奕铭', '男', 'null', '湖南株洲', '17361564066', '15773397168', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1034', '1616270128', '1002', '张羽翀', '男', 'null', '湖北黄冈', '17693462069', '18971729698', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1035', '1616270130', '1002', '温在鑫', '男', 'null', '浙江温州', '17361564078', '15035123789', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1036', '1616270131', '1002', '丁晶晶', '男', 'null', '浙江宁波', '17361560405', '13567412487', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1037', '1616270132', '1002', '王珠峰', '男', 'null', '河南许昌', '17361564098', '13569499121', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1038', '1616270134', '1002', '董帅帅', '男', 'null', '河南驻马店', '18595420506', '13168816098', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1039', '1616270135', '1002', '吴秀来', '男', 'null', '河北承德', '17693257089', '16602672017', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1040', '1616270137', '1002', '王云飞', '男', 'null', '河北沧州', '18215117867', '15194712138', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1041', '1616270139', '1002', '周宇轩', '男', 'null', '江苏南京', '17693192489', '13182981322', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1042', '1616270140', '1002', '林启明', '男', 'null', '广州', '17361564133', '13044265293', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1043', '1616270141', '1002', '张沃民', '男', 'null', '广州东莞', '13717471498', '13702258558', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1044', '1616270142', '1002', '贾兴虎', '男', 'null', '山西万荣', '18295722636', '13466924387', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1045', '1616270143', '1002', '任恩亮', '男', 'null', '山西孝义', '17693437145', '18636421715', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1046', '1616270144', '1002', '徐泽松', '男', 'null', '山东聊城', '18419160081', '15275688083', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1047', '1616270145', '1002', '扈书鹏', '男', 'null', '山东东营', '18394166443', '18189554248', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1048', '1616270146', '1002', '杨金权', '男', 'null', '四川邻水', '15760632076', '15282609322', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1049', '1616270147', '1002', '吴剑峰', '男', 'null', '四川达州', '18782837159', '15775601763', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1050', '1616270148', '1002', '彭宏', '男', 'null', '四川宜宾', '17729855856', '17729855896', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1051', '1616270149', '1002', '李宇辰', '男', 'null', '吉林梅河口', '15294145208', '13944578367', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1052', '1616270150', '1002', '王禹臻', '男', 'null', '吉林', '17693251015', '13089244865', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1053', '1616270151', '1002', '王雪梅', '女', 'null', '甘肃武威', '17361564199', '13195924807', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1054', '1616270152', '1002', '蔡文婷', '女', 'null', '甘肃榆中', '17739897233', '18696097604', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1055', '1616270153', '1002', '刘依林', '女', 'null', '甘肃陇南', '17361564208', '15339791177', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1056', '1616270154', '1002', '李嘉新', '女', 'null', '甘肃渭源', '18894002949', '13993260969', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1057', '1616270155', '1002', '薛媛', '女', 'null', '甘肃酒泉', '17361564211', '15095665194', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1058', '1616270156', '1002', '杨婷玉', '女', 'null', '甘肃兰州', '17361564218', '13321217085', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1059', '1616270157', '1002', '丁雪纯', '女', 'null', '河南周口', '13659413857', '17693170195', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1060', '1616270158', '1002', '张佳敏', '女', 'null', '山西临汾', '18234724623', '13111116509', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1061', '1616270159', '1002', '刘思盈', '女', 'null', '山东滨州', '17361564234', '13754689007', '743400', 'k:/头像/000.jpg');
INSERT INTO `massage` VALUES ('1062', '1616270160', '1002', '孙梦媛', '女', 'null', '吉林蛟河', '17693474044', '15948462836', '743400', 'k:/头像/000.jpg');

-- ----------------------------
-- Table structure for student
-- ----------------------------
DROP TABLE IF EXISTS `student`;
CREATE TABLE `student` (
  `sno` int(11) NOT NULL,
  `sname` varchar(255) DEFAULT NULL,
  `classId` int(11) NOT NULL,
  `ssex` varchar(255) DEFAULT NULL,
  `sage` int(11) DEFAULT NULL,
  PRIMARY KEY (`sno`),
  KEY `sno` (`sno`),
  KEY `cl` (`classId`),
  CONSTRAINT `cl` FOREIGN KEY (`classId`) REFERENCES `class` (`classId`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of student
-- ----------------------------
INSERT INTO `student` VALUES ('1516270125', '金彤辉', '1001', '男', '21');
INSERT INTO `student` VALUES ('1601110144', '刘宏旺', '1001', '男', '21');
INSERT INTO `student` VALUES ('1603430130', '赵子初', '1001', '男', '20');
INSERT INTO `student` VALUES ('1607550160', '曹倩', '1001', '女', '18');
INSERT INTO `student` VALUES ('1607560117', '张文豪', '1001', '男', '20');
INSERT INTO `student` VALUES ('1616270101', '李想', '1001', '男', '20');
INSERT INTO `student` VALUES ('1616270102', '刘杰', '1001', '男', '19');
INSERT INTO `student` VALUES ('1616270103', '王克俭', '1001', '男', '18');
INSERT INTO `student` VALUES ('1616270104', '刘铁辉', '1001', '男', '21');
INSERT INTO `student` VALUES ('1616270105', '王勇帅', '1001', '男', '19');
INSERT INTO `student` VALUES ('1616270106', '刘宝科', '1001', '男', '20');
INSERT INTO `student` VALUES ('1616270107', '王广志', '1001', '男', '19');
INSERT INTO `student` VALUES ('1616270108', '白宝宝', '1001', '男', '15');
INSERT INTO `student` VALUES ('1616270109', '李俊杰', '1001', '男', '21');
INSERT INTO `student` VALUES ('1616270110', '白浩谋', '1001', '男', '19');
INSERT INTO `student` VALUES ('1616270111', '朱海熊', '1001', '男', '20');
INSERT INTO `student` VALUES ('1616270112', '张帅帅', '1001', '男', '20');
INSERT INTO `student` VALUES ('1616270113', '贾旺军', '1001', '男', '20');
INSERT INTO `student` VALUES ('1616270114', '李子哲', '1001', '男', '21');
INSERT INTO `student` VALUES ('1616270115', '李增强', '1001', '男', '20');
INSERT INTO `student` VALUES ('1616270116', '窦长兴', '1001', '男', '16');
INSERT INTO `student` VALUES ('1616270117', '陈学凯', '1001', '男', '30');
INSERT INTO `student` VALUES ('1616270119', '陈振鑫', '1001', '男', '3');
INSERT INTO `student` VALUES ('1616270120', '刘成发', '1001', '男', '19');
INSERT INTO `student` VALUES ('1616270121', '廖鹿', '1001', '男', '25');
INSERT INTO `student` VALUES ('1616270122', '陈玉杰', '1001', '男', '20');
INSERT INTO `student` VALUES ('1616270123', '马良', '1001', '男', '20');
INSERT INTO `student` VALUES ('1616270124', '詹富德', '1001', '男', '23');
INSERT INTO `student` VALUES ('1616270125', '张世凯', '1001', '男', '21');
INSERT INTO `student` VALUES ('1616270126', '张玉林', '1001', '男', '30');
INSERT INTO `student` VALUES ('1616270127', '曾奕铭', '1002', '男', '21');
INSERT INTO `student` VALUES ('1616270128', '张羽翀', '1002', '男', '21');
INSERT INTO `student` VALUES ('1616270130', '温在鑫', '1002', '男', '21');
INSERT INTO `student` VALUES ('1616270131', '丁晶晶', '1002', '男', '20');
INSERT INTO `student` VALUES ('1616270132', '王珠峰', '1002', '男', '20');
INSERT INTO `student` VALUES ('1616270134', '董帅帅', '1002', '男', '20');
INSERT INTO `student` VALUES ('1616270135', '吴秀来', '1002', '男', '20');
INSERT INTO `student` VALUES ('1616270137', '王云飞', '1002', '男', '20');
INSERT INTO `student` VALUES ('1616270139', '周宇轩', '1002', '男', '20');
INSERT INTO `student` VALUES ('1616270140', '林启明', '1002', '男', '20');
INSERT INTO `student` VALUES ('1616270141', '张沃民', '1002', '男', '24');
INSERT INTO `student` VALUES ('1616270142', '贾兴虎', '1002', '男', '21');
INSERT INTO `student` VALUES ('1616270143', '任恩亮', '1002', '男', '19');
INSERT INTO `student` VALUES ('1616270144', '徐泽松', '1002', '男', '18');
INSERT INTO `student` VALUES ('1616270145', '扈书鹏', '1002', '男', '21');
INSERT INTO `student` VALUES ('1616270146', '杨金权', '1002', '男', '20');
INSERT INTO `student` VALUES ('1616270147', '吴剑峰', '1002', '男', '19');
INSERT INTO `student` VALUES ('1616270148', '彭宏', '1002', '男', '21');
INSERT INTO `student` VALUES ('1616270149', '李宇辰', '1002', '男', '20');
INSERT INTO `student` VALUES ('1616270150', '王禹臻', '1002', '男', '20');
INSERT INTO `student` VALUES ('1616270151', '王雪梅', '1002', '女', '20');
INSERT INTO `student` VALUES ('1616270152', '蔡文婷', '1002', '女', '19');
INSERT INTO `student` VALUES ('1616270153', '刘依林', '1002', '女', '18');
INSERT INTO `student` VALUES ('1616270154', '李嘉新', '1002', '女', '19');
INSERT INTO `student` VALUES ('1616270155', '薛媛', '1002', '女', '16');
INSERT INTO `student` VALUES ('1616270156', '杨婷玉', '1002', '女', '19');
INSERT INTO `student` VALUES ('1616270157', '丁雪纯', '1002', '女', '20');
INSERT INTO `student` VALUES ('1616270158', '张佳敏', '1002', '女', '16');
INSERT INTO `student` VALUES ('1616270159', '刘思盈', '1002', '女', '16');
INSERT INTO `student` VALUES ('1616270160', '孙梦媛', '1002', '女', '18');
