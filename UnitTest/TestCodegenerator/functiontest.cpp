#include "functiontest.h"
#include <list>
#include <QString>
#include <vector>
#include <map>
#include "../../gtest/gtest.h"
#include "testdatagenerator.h"
#include "evaluatetest.h"
#include "testutilities.h"

FunctionTest::FunctionTest()
{

}

// Testcases Functions with no Parameter
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
TEST(FunctionTest, functionNoParameterReturnInt)
{
    QString scriptPath = "..\\Files\\Scripts\\functionWithNoParameterReturnInt.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDataFunctionNoParamterReturnInt();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    EXPECT_EQ(EvaluateTest::evaluate(classHeaderList, expectedList),1);
}


TEST(FunctionTest, functionNoParameterReturnQStringPointer)
{
    QString scriptPath = "..\\Files\\Scripts\\functionWithNoParameterReturnQStringPointer.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDataFunctionNoParamterReturnQStringPointer();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}

TEST(FunctionTest, functionNoParameterTestclassReference)
{
    QString scriptPath = "..\\Files\\Scripts\\functionWithNoParameterReturnTestClassReference.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDataFunctionNoParamterTestClassReference();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}

TEST(FunctionTest, functionNoParameterConstReturnvectorintConst)
{
    QString scriptPath = "..\\Files\\Scripts\\functionConstWithNoParameterReturnvectorint.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDataFunctionConstNoParamterVectorInt();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}

TEST(FunctionTest, functionOneParameterReturninParameterDouble)
{
    QString scriptPath = "..\\Files\\Scripts\\functionWithOneParameterReturnintParameterDouble.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDataFunctionOneParmeterReturnIntParameterDouble();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}


// functions with one Parameter
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
TEST(FunctionTest, functionOneParameterReturnTestClassParameterTestClassReference)
{
    QString scriptPath = "..\\Files\\Scripts\\functionWithOneParameterReturnTestClassParameterTestClassReference.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDataFunctionOneParmeterReturnTestClassParameterTestClassReference();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}



TEST(FunctionTest, functionConstOneParameterReturnVectorIntParameterReferenceVectorInt)
{
    QString scriptPath = "..\\Files\\Scripts\\functionConstWithoneParameterReturnVectorIntParameterReferenceVectorInt.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDataConstFunctionOneParmeterReturnVectorIntParameterVectorInt();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}

TEST(FunctionTest, functionOneParameterReturnIntParameterIntDefaultValue31)
{
    QString scriptPath = "..\\Files\\Scripts\\functionOneParameterReturnIntParameterIntDefaultValue31.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDatafunctionOneParameterReturnIntParameterIntDefaultValue31();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}


TEST(FunctionTest, functionConstOneParameterReturnintReferenceParameterConstVoidPointer)
{
    QString scriptPath = "..\\Files\\Scripts\\functionConstWithoneParameterReturnintReferneceParameterConstVoidPointer.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDataConstFunctionOneParmeterReturnIntRefernceParameterConstVoidPointer();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}

TEST(FunctionTest, functionOneParameterReturnDoubleParameterTestClassConstPointer)
{
    QString scriptPath = "..\\Files\\Scripts\\functionWithoneParameterReturnDoubleParameterTestClassConstPointer.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDataFunctionOneParmeterReturnDoubleParameterTestClassConstPointer();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}

TEST(FunctionTest, functionConstOneParameterReturnConstPointerDoubleParameterConstPointerConstInt)
{
    QString scriptPath = "..\\Files\\Scripts\\testDataFunctionConstOneParmeterReturnConstPointerDoubleParameterConstPointerConstInt.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDataFunctionConstOneParmeterReturnConstPointerDoubleParameterConstPointerConstInt();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}



// function with two parameter
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

TEST(FunctionTest, functionTwoParameterReturnTestParameterPointerParameter1IntParameter2ConstTestParameterReference)
{
    QString scriptPath = "..\\Files\\Scripts\\functionWithTwoParameterReturnTestParameterPointerParameter1IntParameter2TestParameterConstReference.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDataFunctionTwoParmeterReturnTestParameterParameterOneIntParameterTwoConstTestParameterReference();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}


TEST(FunctionTest, functionConstTwoParameterReturnLongReferenceParameter1ConstReferenceDoubleParameter2ConstReferenceConstTestClass)
{
    QString scriptPath = "..\\Files\\Scripts\\functionConstTwoParameterReturnLongReferenceParameter1ConstReferenceDoubleParameter2ConstReferenceConstTestClass.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDataFunctionConstTwoParameterReturnLongReferenceParameter1ConstReferenceDoubleParameter2ConstReferenceConstTestClass();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}


// function with three parameter
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

TEST(FunctionTest, functionThreeParameterReturnDoubleParameter1DoubleParameter2intParameter3TestClass)
{
    QString scriptPath = "..\\Files\\Scripts\\functionThreeParameterReturnDoubleParameter1DoubleParameter2intParameter3TestClass.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDatafunctionThreeParameterReturnDoubleParameter1DoubleParameter2intParameter3TestClass();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}

TEST(FunctionTest, functionThreeParameterReturnDoubleParameter1DoubleParameter2intParameter3LongDefaultValue12_2)
{
    QString scriptPath = "..\\Files\\Scripts\\functionThreeParameterReturnDoubleParameter1DoubleParameter2intParameter3LongDefault12_2.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDatafunctionThreeParameterReturnDoubleParameter1DoubleParameter2intParameter3LongDefault12_2();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}



//serverall functions
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
TEST(FunctionTest, twoEasyfunctions)
{
    QString scriptPath = "..\\Files\\Scripts\\twoEasyFunctions.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDataTwoEasyFunctions();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}

TEST(FunctionTest, threeFunctionsMixedModifiers)
{
    QString scriptPath = "..\\Files\\Scripts\\fourFunctionsMixedModifier.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDataFourFunctionsMixedModifiers();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}


// Function one:  int* (const double&,TestClass*, int = 5) const
// Function two:  double (int *, long)
// Function three: const Testclass& (const * const, int) const
TEST(FunctionTest, threeComplexFunctions)
{
    QString scriptPath = "..\\Files\\Scripts\\threeComplexFunctions.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDataThreeComplexFunctions();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}


// Function one:  int* (const double&,TestClass*, int = 5) const
// Function two:  double (int *, long)
// Function three: const Testclass& (const * const, int) const
TEST(FunctionTest, threeComplexFunctionsMixedModifier)
{
    QString scriptPath = "..\\Files\\Scripts\\threeComplexFunctionsMixedModifier.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDataThreeComplexFunctions();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}


//attributes
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
TEST(FunctionTest, OneAttributes)
{
    QString scriptPath = "..\\Files\\Scripts\\OneAttribute.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testOneAttribute();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}


TEST(FunctionTest, FourAttributesMixedModifiers)
{
    QString scriptPath = "..\\Files\\Scripts\\FourAtributeMixedModifiers.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDataFourAttributesMixedModifiers();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}


// mixed with functions and attributes
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
TEST(FunctionTest, MixedFunctionAndAttributes)
{
    QString scriptPath = "..\\Files\\Scripts\\MixedFunctionsAndAttributes.txt";
    std::list<QString> expectedList;
    expectedList = TestdataGenerator::testDataFunctionsAttributesMixedModifiers();
    std::list<QString> classHeaderList = TestUtilities::FunctionTest(scriptPath);
    bool result = false;
    result = EvaluateTest::evaluate(classHeaderList, expectedList);
    EXPECT_EQ(result, true);
}










