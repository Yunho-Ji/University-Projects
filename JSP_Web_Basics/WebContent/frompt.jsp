<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Insert title here</title>

<script type = "text/javascript">
	var cm, kg, cmkg;
	
	function input_int_box(){
		var cm, kg;
		cm = prompt("당신의 신장은 ?","이곳에 입력");
		kg = prompt("당신의 몸무게는 ?","이곳에 입력");	
	}
	
	input_int_box();
	
	function cul(){
		cmkg = (cm - 100)*0.9;
		
		if(cmkg == kg)
		var one = document.getElementById("frt");
		var two = document.getElementById("sed");
		var thr = document.getElementById("trd");
		
		one.innerHTML = "<b><font color='red'>값이 바뀜</font></b>";
	}
	cul();
	</script>
	
</head>

<body>
<h1>표준 몸무게 여부 판정</h1>
<h2>판정 결과</h2>
	
	<div id = frt;>1. 정상</div>
	<br>
	<div id = sed;>2. 과체중</div>
	<br>
	<div id = trd;>3. 저체중</div>
	<script>
	
	</script>	
</body>
</html>