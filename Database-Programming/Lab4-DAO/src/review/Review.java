/**
 * 책에 대한 리뷰
 */
package review;

import java.util.*;

public class Review {
    private int reviewId;   // 리뷰 구분 id
    private String title;   // 책 제목
    private String userId;  // 사용자 아이디
    private String nickname; // 작성자(닉네임 사용)
    private int stars;  // 별점
    private String level;   // 난이도 (초급 : 중급 : 고급)
    private String purpose; // 독서 목적
    private String recommObj;   // 추천 대상
    private String keyword; // 책 키워드 
    private String onelineReview;   // 한줄평
    private String multilineReview; // 상세 리뷰
    private String ISBN;        // 책 고유번호
    private Date createDate;    //리뷰 생성 날짜

    public Review() { }
    
    
    public Review(int reviewId, int stars, 
            String onelineReview, Date createDate) {
        this.reviewId = reviewId;
        this.stars = stars;
        this.onelineReview = onelineReview;
        this.createDate = createDate;
    }
    
    public Review(int reviewId, int stars, String level, 
            String keyword, String onelineReview) {
        this.reviewId = reviewId;
        this.stars = stars;
        this.level = level;
        this.keyword = keyword;
        this.onelineReview = onelineReview;
    }
    
    public Review(int reviewId, int stars, String level, String purpose,
            String recommObj, String keyword, 
            String onelineReview, String multilineReview, 
            String title, Date createDate) {
        super();
        this.reviewId = reviewId;
        this.stars = stars;
        this.level = level;
        this.purpose = purpose;
        this.recommObj = recommObj;
        this.keyword = keyword;
        this.onelineReview = onelineReview;
        this.multilineReview = multilineReview;
        this.title = title;
        this.nickname = nickname;
        this.createDate = createDate; 
    }

    public Review(int reviewId, String title, String userId, String nickname, int stars, 
            String level, String purpose, String recommObj, String keyword, 
            String onelineReview, String multilineReview, String iSBN,
            Date createDate) {
        super();
        this.reviewId = reviewId;
        this.title = title;
        this.userId = userId;
        this.nickname = nickname;
        this.stars = stars;
        this.level = level;
        this.purpose = purpose;
        this.recommObj = recommObj;
        this.keyword = keyword;
        this.onelineReview = onelineReview;
        this.multilineReview = multilineReview;
        this.ISBN = iSBN;
        this.createDate = createDate;
    }

    public int getReviewId() {
        return reviewId;
    }

    public void setReviewId(int reviewId) {
        this.reviewId = reviewId;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public String getUserId() {
        return userId;
    }

    public void setUserId(String userId) {
        this.userId = userId;
    }

    public String getNickname() {
        return nickname;
    }

    public void setNickname(String nickname) {
        this.nickname = nickname;
    }

    public int getStars() {
        return stars;
    }

    public void setStars(int stars) {
        this.stars = stars;
    }

    public String getLevel() {
        return level;
    }

    public void setLevel(String level) {
        this.level = level;
    }

    public String getPurpose() {
        return purpose;
    }

    public void setPurpose(String purpose) {
        this.purpose = purpose;
    }

    public String getRecommObj() {
        return recommObj;
    }

    public void setRecommObj(String recommObj) {
        this.recommObj = recommObj;
    }

    public String getKeyword() {
        return keyword;
    }

    public void setKeyword(String keyword) {
        this.keyword = keyword;
    }

    public String getOnelineReview() {
        return onelineReview;
    }

    public void setOnelineReview(String onelineReview) {
        this.onelineReview = onelineReview;
    }

    public String getMultilineReview() {
        return multilineReview;
    }

    public void setMultilineReview(String multilineReview) {
        this.multilineReview = multilineReview;
    }

    public String getISBN() {
        return ISBN;
    }

    public void setISBN(String iSBN) {
        ISBN = iSBN;
    }

    public Date getCreateDate() {
        return createDate;
    }

    public void setCreateDate(Date createDate) {
        this.createDate = createDate;
    }

    @Override
    public String toString() {
        return "Review [reviewId=" + reviewId + ", title=" + title + ", userId=" + userId + ", nickname=" + nickname
                + ", stars=" + stars + ", level=" + level + ", purpose=" + purpose + ", recommObj=" + recommObj
                + ", keyword=" + keyword + ", onelineReview=" + onelineReview + ", multilineReview=" + multilineReview
                + ", ISBN=" + ISBN + ", createDate=" + createDate + "]";
    }
    
    
}
