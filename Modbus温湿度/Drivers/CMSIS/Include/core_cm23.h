??/ * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / / * * 
   *   @ f i l e           c o r e _ c m 2 3 . h 
   *   @ b r i e f         C M S I S   C o r t e x - M 2 3   C o r e   P e r i p h e r a l   A c c e s s   L a y e r   H e a d e r   F i l e 
   *   @ v e r s i o n     V 5 . 0 . 7 
   *   @ d a t e           2 2 .   J u n e   2 0 1 8 
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 / * 
   *   C o p y r i g h t   ( c )   2 0 0 9 - 2 0 1 8   A r m   L i m i t e d .   A l l   r i g h t s   r e s e r v e d . 
   * 
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0 
   * 
   *   L i c e n s e d   u n d e r   t h e   A p a c h e   L i c e n s e ,   V e r s i o n   2 . 0   ( t h e   L i c e n s e ) ;   y o u   m a y 
   *   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e   L i c e n s e . 
   *   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t 
   * 
   *   w w w . a p a c h e . o r g / l i c e n s e s / L I C E N S E - 2 . 0 
   * 
   *   U n l e s s   r e q u i r e d   b y   a p p l i c a b l e   l a w   o r   a g r e e d   t o   i n   w r i t i n g ,   s o f t w a r e 
   *   d i s t r i b u t e d   u n d e r   t h e   L i c e n s e   i s   d i s t r i b u t e d   o n   a n   A S   I S   B A S I S ,   W I T H O U T 
   *   W A R R A N T I E S   O R   C O N D I T I O N S   O F   A N Y   K I N D ,   e i t h e r   e x p r e s s   o r   i m p l i e d . 
   *   S e e   t h e   L i c e n s e   f o r   t h e   s p e c i f i c   l a n g u a g e   g o v e r n i n g   p e r m i s s i o n s   a n d 
   *   l i m i t a t i o n s   u n d e r   t h e   L i c e n s e . 
   * / 
 
 # i f       d e f i n e d   (   _ _ I C C A R M _ _   ) 
     # p r a g m a   s y s t e m _ i n c l u d e                   / *   t r e a t   f i l e   a s   s y s t e m   i n c l u d e   f i l e   f o r   M I S R A   c h e c k   * / 
 # e l i f   d e f i n e d   ( _ _ c l a n g _ _ ) 
     # p r a g m a   c l a n g   s y s t e m _ h e a d e r       / *   t r e a t   f i l e   a s   s y s t e m   i n c l u d e   f i l e   * / 
 # e n d i f 
 
 # i f n d e f   _ _ C O R E _ C M 2 3 _ H _ G E N E R I C 
 # d e f i n e   _ _ C O R E _ C M 2 3 _ H _ G E N E R I C 
 
 # i n c l u d e   < s t d i n t . h > 
 
 # i f d e f   _ _ c p l u s p l u s 
   e x t e r n   " C "   { 
 # e n d i f 
 
 / * * 
     \ p a g e   C M S I S _ M I S R A _ E x c e p t i o n s     M I S R A - C : 2 0 0 4   C o m p l i a n c e   E x c e p t i o n s 
     C M S I S   v i o l a t e s   t h e   f o l l o w i n g   M I S R A - C : 2 0 0 4   r u l e s : 
 
       \ l i   R e q u i r e d   R u l e   8 . 5 ,   o b j e c t / f u n c t i o n   d e f i n i t i o n   i n   h e a d e r   f i l e . < b r > 
           F u n c t i o n   d e f i n i t i o n s   i n   h e a d e r   f i l e s   a r e   u s e d   t o   a l l o w   ' i n l i n i n g ' . 
 
       \ l i   R e q u i r e d   R u l e   1 8 . 4 ,   d e c l a r a t i o n   o f   u n i o n   t y p e   o r   o b j e c t   o f   u n i o n   t y p e :   ' { . . . } ' . < b r > 
           U n i o n s   a r e   u s e d   f o r   e f f e c t i v e   r e p r e s e n t a t i o n   o f   c o r e   r e g i s t e r s . 
 
       \ l i   A d v i s o r y   R u l e   1 9 . 7 ,   F u n c t i o n - l i k e   m a c r o   d e f i n e d . < b r > 
           F u n c t i o n - l i k e   m a c r o s   a r e   u s e d   t o   a l l o w   m o r e   e f f i c i e n t   c o d e . 
   * / 
 
 
 / * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
   *                                   C M S I S   d e f i n i t i o n s 
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 / * * 
     \ i n g r o u p   C o r t e x _ M 2 3 
     @ { 
   * / 
 
 # i n c l u d e   " c m s i s _ v e r s i o n . h " 
 
 / *     C M S I S   d e f i n i t i o n s   * / 
 # d e f i n e   _ _ C M 2 3 _ C M S I S _ V E R S I O N _ M A I N     ( _ _ C M _ C M S I S _ V E R S I O N _ M A I N )                                       / * ! <   \ d e p r e c a t e d   [ 3 1 : 1 6 ]   C M S I S   H A L   m a i n   v e r s i o n   * / 
 # d e f i n e   _ _ C M 2 3 _ C M S I S _ V E R S I O N _ S U B       ( _ _ C M _ C M S I S _ V E R S I O N _ S U B )                                         / * ! <   \ d e p r e c a t e d   [ 1 5 : 0 ]     C M S I S   H A L   s u b   v e r s i o n   * / 
 # d e f i n e   _ _ C M 2 3 _ C M S I S _ V E R S I O N               ( ( _ _ C M 2 3 _ C M S I S _ V E R S I O N _ M A I N   < <   1 6 U )   |   \ 
                                                                           _ _ C M 2 3 _ C M S I S _ V E R S I O N _ S U B                       )             / * ! <   \ d e p r e c a t e d   C M S I S   H A L   v e r s i o n   n u m b e r   * / 
 
 # d e f i n e   _ _ C O R T E X _ M                                   ( 2 3 U )                                                                               / * ! <   C o r t e x - M   C o r e   * / 
 
 / * *   _ _ F P U _ U S E D   i n d i c a t e s   w h e t h e r   a n   F P U   i s   u s e d   o r   n o t . 
         T h i s   c o r e   d o e s   n o t   s u p p o r t   a n   F P U   a t   a l l 
 * / 
 # d e f i n e   _ _ F P U _ U S E D               0 U 
 
 # i f   d e f i n e d   (   _ _ C C _ A R M   ) 
     # i f   d e f i n e d   _ _ T A R G E T _ F P U _ V F P 
         # e r r o r   " C o m p i l e r   g e n e r a t e s   F P U   i n s t r u c t i o n s   f o r   a   d e v i c e   w i t h o u t   a n   F P U   ( c h e c k   _ _ F P U _ P R E S E N T ) " 
     # e n d i f 
 
 # e l i f   d e f i n e d   ( _ _ A R M C C _ V E R S I O N )   & &   ( _ _ A R M C C _ V E R S I O N   > =   6 0 1 0 0 5 0 ) 
     # i f   d e f i n e d   _ _ A R M _ P C S _ V F P 
         # e r r o r   " C o m p i l e r   g e n e r a t e s   F P U   i n s t r u c t i o n s   f o r   a   d e v i c e   w i t h o u t   a n   F P U   ( c h e c k   _ _ F P U _ P R E S E N T ) " 
     # e n d i f 
 
 # e l i f   d e f i n e d   (   _ _ G N U C _ _   ) 
     # i f   d e f i n e d   ( _ _ V F P _ F P _ _ )   & &   ! d e f i n e d ( _ _ S O F T F P _ _ ) 
         # e r r o r   " C o m p i l e r   g e n e r a t e s   F P U   i n s t r u c t i o n s   f o r   a   d e v i c e   w i t h o u t   a n   F P U   ( c h e c k   _ _ F P U _ P R E S E N T ) " 
     # e n d i f 
 
 # e l i f   d e f i n e d   (   _ _ I C C A R M _ _   ) 
     # i f   d e f i n e d   _ _ A R M V F P _ _ 
         # e r r o r   " C o m p i l e r   g e n e r a t e s   F P U   i n s t r u c t i o n s   f o r   a   d e v i c e   w i t h o u t   a n   F P U   ( c h e c k   _ _ F P U _ P R E S E N T ) " 
     # e n d i f 
 
 # e l i f   d e f i n e d   (   _ _ T I _ A R M _ _   ) 
     # i f   d e f i n e d   _ _ T I _ V F P _ S U P P O R T _ _ 
         # e r r o r   " C o m p i l e r   g e n e r a t e s   F P U   i n s t r u c t i o n s   f o r   a   d e v i c e   w i t h o u t   a n   F P U   ( c h e c k   _ _ F P U _ P R E S E N T ) " 
     # e n d i f 
 
 # e l i f   d e f i n e d   (   _ _ T A S K I N G _ _   ) 
     # i f   d e f i n e d   _ _ F P U _ V F P _ _ 
         # e r r o r   " C o m p i l e r   g e n e r a t e s   F P U   i n s t r u c t i o n s   f o r   a   d e v i c e   w i t h o u t   a n   F P U   ( c h e c k   _ _ F P U _ P R E S E N T ) " 
     # e n d i f 
 
 # e l i f   d e f i n e d   (   _ _ C S M C _ _   ) 
     # i f   (   _ _ C S M C _ _   &   0 x 4 0 0 U ) 
         # e r r o r   " C o m p i l e r   g e n e r a t e s   F P U   i n s t r u c t i o n s   f o r   a   d e v i c e   w i t h o u t   a n   F P U   ( c h e c k   _ _ F P U _ P R E S E N T ) " 
     # e n d i f 
 
 # e n d i f 
 
 # i n c l u d e   " c m s i s _ c o m p i l e r . h "                               / *   C M S I S   c o m p i l e r   s p e c i f i c   d e f i n e s   * / 
 
 
 # i f d e f   _ _ c p l u s p l u s 
 } 
 # e n d i f 
 
 # e n d i f   / *   _ _ C O R E _ C M 2 3 _ H _ G E N E R I C   * / 
 
 # i f n d e f   _ _ C M S I S _ G E N E R I C 
 
 # i f n d e f   _ _ C O R E _ C M 2 3 _ H _ D E P E N D A N T 
 # d e f i n e   _ _ C O R E _ C M 2 3 _ H _ D E P E N D A N T 
 
 # i f d e f   _ _ c p l u s p l u s 
   e x t e r n   " C "   { 
 # e n d i f 
 
 / *   c h e c k   d e v i c e   d e f i n e s   a n d   u s e   d e f a u l t s   * / 
 # i f   d e f i n e d   _ _ C H E C K _ D E V I C E _ D E F I N E S 
     # i f n d e f   _ _ C M 2 3 _ R E V 
         # d e f i n e   _ _ C M 2 3 _ R E V                                 0 x 0 0 0 0 U 
         # w a r n i n g   " _ _ C M 2 3 _ R E V   n o t   d e f i n e d   i n   d e v i c e   h e a d e r   f i l e ;   u s i n g   d e f a u l t ! " 
     # e n d i f 
 
     # i f n d e f   _ _ F P U _ P R E S E N T 
         # d e f i n e   _ _ F P U _ P R E S E N T                           0 U 
         # w a r n i n g   " _ _ F P U _ P R E S E N T   n o t   d e f i n e d   i n   d e v i c e   h e a d e r   f i l e ;   u s i n g   d e f a u l t ! " 
     # e n d i f 
 
     # i f n d e f   _ _ M P U _ P R E S E N T 
         # d e f i n e   _ _ M P U _ P R E S E N T                           0 U 
         # w a r n i n g   " _ _ M P U _ P R E S E N T   n o t   d e f i n e d   i n   d e v i c e   h e a d e r   f i l e ;   u s i n g   d e f a u l t ! " 
     # e n d i f 
 
     # i f n d e f   _ _ S A U R E G I O N _ P R E S E N T 
         # d e f i n e   _ _ S A U R E G I O N _ P R E S E N T               0 U 
         # w a r n i n g   " _ _ S A U R E G I O N _ P R E S E N T   n o t   d e f i n e d   i n   d e v i c e   h e a d e r   f i l e ;   u s i n g   d e f a u l t ! " 
     # e n d i f 
 
     # i f n d e f   _ _ V T O R _ P R E S E N T 
         # d e f i n e   _ _ V T O R _ P R E S E N T                         0 U 
         # w a r n i n g   " _ _ V T O R _ P R E S E N T   n o t   d e f i n e d   i n   d e v i c e   h e a d e r   f i l e ;   u s i n g   d e f a u l t ! " 
     # e n d i f 
 
     # i f n d e f   _ _ N V I C _ P R I O _ B I T S 
         # d e f i n e   _ _ N V I C _ P R I O _ B I T S                     2 U 
         # w a r n i n g   " _ _ N V I C _ P R I O _ B I T S   n o t   d e f i n e d   i n   d e v i c e   h e a d e r   f i l e ;   u s i n g   d e f a u l t ! " 
     # e n d i f 
 
     # i f n d e f   _ _ V e n d o r _ S y s T i c k C o n f i g 
         # d e f i n e   _ _ V e n d o r _ S y s T i c k C o n f i g         0 U 
         # w a r n i n g   " _ _ V e n d o r _ S y s T i c k C o n f i g   n o t   d e f i n e d   i n   d e v i c e   h e a d e r   f i l e ;   u s i n g   d e f a u l t ! " 
     # e n d i f 
 
     # i f n d e f   _ _ E T M _ P R E S E N T 
         # d e f i n e   _ _ E T M _ P R E S E N T                           0 U 
         # w a r n i n g   " _ _ E T M _ P R E S E N T   n o t   d e f i n e d   i n   d e v i c e   h e a d e r   f i l e ;   u s i n g   d e f a u l t ! " 
     # e n d i f 
 
     # i f n d e f   _ _ M T B _ P R E S E N T 
         # d e f i n e   _ _ M T B _ P R E S E N T                           0 U 
         # w a r n i n g   " _ _ M T B _ P R E S E N T   n o t   d e f i n e d   i n   d e v i c e   h e a d e r   f i l e ;   u s i n g   d e f a u l t ! " 
     # e n d i f 
 
 # e n d i f 
 
 / *   I O   d e f i n i t i o n s   ( a c c e s s   r e s t r i c t i o n s   t o   p e r i p h e r a l   r e g i s t e r s )   * / 
 / * * 
         \ d e f g r o u p   C M S I S _ g l o b _ d e f s   C M S I S   G l o b a l   D e f i n e s 
 
         < s t r o n g > I O   T y p e   Q u a l i f i e r s < / s t r o n g >   a r e   u s e d 
         \ l i   t o   s p e c i f y   t h e   a c c e s s   t o   p e r i p h e r a l   v a r i a b l e s . 
         \ l i   f o r   a u t o m a t i c   g e n e r a t i o n   o f   p e r i p h e r a l   r e g i s t e r   d e b u g   i n f o r m a t i o n . 
 * / 
 # i f d e f   _ _ c p l u s p l u s 
     # d e f i n e       _ _ I           v o l a t i l e                           / * ! <   D e f i n e s   ' r e a d   o n l y '   p e r m i s s i o n s   * / 
 # e l s e 
     # d e f i n e       _ _ I           v o l a t i l e   c o n s t               / * ! <   D e f i n e s   ' r e a d   o n l y '   p e r m i s s i o n s   * / 
 # e n d i f 
 # d e f i n e           _ _ O           v o l a t i l e                           / * ! <   D e f i n e s   ' w r i t e   o n l y '   p e r m i s s i o n s   * / 
 # d e f i n e           _ _ I O         v o l a t i l e                           / * ! <   D e f i n e s   ' r e a d   /   w r i t e '   p e r m i s s i o n s   * / 
 
 / *   f o l l o w i n g   d e f i n e s   s h o u l d   b e   u s e d   f o r   s t r u c t u r e   m e m b e r s   * / 
 # d e f i n e           _ _ I M           v o l a t i l e   c o n s t             / * !   D e f i n e s   ' r e a d   o n l y '   s t r u c t u r e   m e m b e r   p e r m i s s i o n s   * / 
 # d e f i n e           _ _ O M           v o l a t i l e                         / * !   D e f i n e s   ' w r i t e   o n l y '   s t r u c t u r e   m e m b e r   p e r m i s s i o n s   * / 
 # d e f i n e           _ _ I O M         v o l a t i l e                         / * !   D e f i n e s   ' r e a d   /   w r i t e '   s t r u c t u r e   m e m b e r   p e r m i s s i o n s   * / 
 
 / * @ }   e n d   o f   g r o u p   C o r t e x _ M 2 3   * / 
 
 
 
 / * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
   *                                   R e g i s t e r   A b s t r a c t i o n 
     C o r e   R e g i s t e r   c o n t a i n : 
     -   C o r e   R e g i s t e r 
     -   C o r e   N V I C   R e g i s t e r 
     -   C o r e   S C B   R e g i s t e r 
     -   C o r e   S y s T i c k   R e g i s t e r 
     -   C o r e   D e b u g   R e g i s t e r 
     -   C o r e   M P U   R e g i s t e r 
     -   C o r e   S A U   R e g i s t e r 
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 / * * 
     \ d e f g r o u p   C M S I S _ c o r e _ r e g i s t e r   D e f i n e s   a n d   T y p e   D e f i n i t i o n s 
     \ b r i e f   T y p e   d e f i n i t i o n s   a n d   d e f i n e s   f o r   C o r t e x - M   p r o c e s s o r   b a s e d   d e v i c e s . 
 * / 
 
 / * * 
     \ i n g r o u p         C M S I S _ c o r e _ r e g i s t e r 
     \ d e f g r o u p       C M S I S _ C O R E     S t a t u s   a n d   C o n t r o l   R e g i s t e r s 
     \ b r i e f             C o r e   R e g i s t e r   t y p e   d e f i n i t i o n s . 
     @ { 
   * / 
 
 / * * 
     \ b r i e f     U n i o n   t y p e   t o   a c c e s s   t h e   A p p l i c a t i o n   P r o g r a m   S t a t u s   R e g i s t e r   ( A P S R ) . 
   * / 
 t y p e d e f   u n i o n 
 { 
     s t r u c t 
     { 
         u i n t 3 2 _ t   _ r e s e r v e d 0 : 2 8 ;                             / * ! <   b i t :     0 . . 2 7     R e s e r v e d   * / 
         u i n t 3 2 _ t   V : 1 ;                                                 / * ! <   b i t :           2 8     O v e r f l o w   c o n d i t i o n   c o d e   f l a g   * / 
         u i n t 3 2 _ t   C : 1 ;                                                 / * ! <   b i t :           2 9     C a r r y   c o n d i t i o n   c o d e   f l a g   * / 
         u i n t 3 2 _ t   Z : 1 ;                                                 / * ! <   b i t :           3 0     Z e r o   c o n d i t i o n   c o d e   f l a g   * / 
         u i n t 3 2 _ t   N : 1 ;                                                 / * ! <   b i t :           3 1     N e g a t i v e   c o n d i t i o n   c o d e   f l a g   * / 
     }   b ;                                                                       / * ! <   S t r u c t u r e   u s e d   f o r   b i t     a c c e s s   * / 
     u i n t 3 2 _ t   w ;                                                         / * ! <   T y p e             u s e d   f o r   w o r d   a c c e s s   * / 
 }   A P S R _ T y p e ; 
 
 / *   A P S R   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   A P S R _ N _ P o s                                                   3 1 U                                                                                         / * ! <   A P S R :   N   P o s i t i o n   * / 
 # d e f i n e   A P S R _ N _ M s k                                                   ( 1 U L   < <   A P S R _ N _ P o s )                                                         / * ! <   A P S R :   N   M a s k   * / 
 
 # d e f i n e   A P S R _ Z _ P o s                                                   3 0 U                                                                                         / * ! <   A P S R :   Z   P o s i t i o n   * / 
 # d e f i n e   A P S R _ Z _ M s k                                                   ( 1 U L   < <   A P S R _ Z _ P o s )                                                         / * ! <   A P S R :   Z   M a s k   * / 
 
 # d e f i n e   A P S R _ C _ P o s                                                   2 9 U                                                                                         / * ! <   A P S R :   C   P o s i t i o n   * / 
 # d e f i n e   A P S R _ C _ M s k                                                   ( 1 U L   < <   A P S R _ C _ P o s )                                                         / * ! <   A P S R :   C   M a s k   * / 
 
 # d e f i n e   A P S R _ V _ P o s                                                   2 8 U                                                                                         / * ! <   A P S R :   V   P o s i t i o n   * / 
 # d e f i n e   A P S R _ V _ M s k                                                   ( 1 U L   < <   A P S R _ V _ P o s )                                                         / * ! <   A P S R :   V   M a s k   * / 
 
 
 / * * 
     \ b r i e f     U n i o n   t y p e   t o   a c c e s s   t h e   I n t e r r u p t   P r o g r a m   S t a t u s   R e g i s t e r   ( I P S R ) . 
   * / 
 t y p e d e f   u n i o n 
 { 
     s t r u c t 
     { 
         u i n t 3 2 _ t   I S R : 9 ;                                             / * ! <   b i t :     0 . .   8     E x c e p t i o n   n u m b e r   * / 
         u i n t 3 2 _ t   _ r e s e r v e d 0 : 2 3 ;                             / * ! <   b i t :     9 . . 3 1     R e s e r v e d   * / 
     }   b ;                                                                       / * ! <   S t r u c t u r e   u s e d   f o r   b i t     a c c e s s   * / 
     u i n t 3 2 _ t   w ;                                                         / * ! <   T y p e             u s e d   f o r   w o r d   a c c e s s   * / 
 }   I P S R _ T y p e ; 
 
 / *   I P S R   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   I P S R _ I S R _ P o s                                                 0 U                                                                                         / * ! <   I P S R :   I S R   P o s i t i o n   * / 
 # d e f i n e   I P S R _ I S R _ M s k                                               ( 0 x 1 F F U L   / * < <   I P S R _ I S R _ P o s * / )                                     / * ! <   I P S R :   I S R   M a s k   * / 
 
 
 / * * 
     \ b r i e f     U n i o n   t y p e   t o   a c c e s s   t h e   S p e c i a l - P u r p o s e   P r o g r a m   S t a t u s   R e g i s t e r s   ( x P S R ) . 
   * / 
 t y p e d e f   u n i o n 
 { 
     s t r u c t 
     { 
         u i n t 3 2 _ t   I S R : 9 ;                                             / * ! <   b i t :     0 . .   8     E x c e p t i o n   n u m b e r   * / 
         u i n t 3 2 _ t   _ r e s e r v e d 0 : 1 5 ;                             / * ! <   b i t :     9 . . 2 3     R e s e r v e d   * / 
         u i n t 3 2 _ t   T : 1 ;                                                 / * ! <   b i t :           2 4     T h u m b   b i t                 ( r e a d   0 )   * / 
         u i n t 3 2 _ t   _ r e s e r v e d 1 : 3 ;                               / * ! <   b i t :   2 5 . . 2 7     R e s e r v e d   * / 
         u i n t 3 2 _ t   V : 1 ;                                                 / * ! <   b i t :           2 8     O v e r f l o w   c o n d i t i o n   c o d e   f l a g   * / 
         u i n t 3 2 _ t   C : 1 ;                                                 / * ! <   b i t :           2 9     C a r r y   c o n d i t i o n   c o d e   f l a g   * / 
         u i n t 3 2 _ t   Z : 1 ;                                                 / * ! <   b i t :           3 0     Z e r o   c o n d i t i o n   c o d e   f l a g   * / 
         u i n t 3 2 _ t   N : 1 ;                                                 / * ! <   b i t :           3 1     N e g a t i v e   c o n d i t i o n   c o d e   f l a g   * / 
     }   b ;                                                                       / * ! <   S t r u c t u r e   u s e d   f o r   b i t     a c c e s s   * / 
     u i n t 3 2 _ t   w ;                                                         / * ! <   T y p e             u s e d   f o r   w o r d   a c c e s s   * / 
 }   x P S R _ T y p e ; 
 
 / *   x P S R   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   x P S R _ N _ P o s                                                   3 1 U                                                                                         / * ! <   x P S R :   N   P o s i t i o n   * / 
 # d e f i n e   x P S R _ N _ M s k                                                   ( 1 U L   < <   x P S R _ N _ P o s )                                                         / * ! <   x P S R :   N   M a s k   * / 
 
 # d e f i n e   x P S R _ Z _ P o s                                                   3 0 U                                                                                         / * ! <   x P S R :   Z   P o s i t i o n   * / 
 # d e f i n e   x P S R _ Z _ M s k                                                   ( 1 U L   < <   x P S R _ Z _ P o s )                                                         / * ! <   x P S R :   Z   M a s k   * / 
 
 # d e f i n e   x P S R _ C _ P o s                                                   2 9 U                                                                                         / * ! <   x P S R :   C   P o s i t i o n   * / 
 # d e f i n e   x P S R _ C _ M s k                                                   ( 1 U L   < <   x P S R _ C _ P o s )                                                         / * ! <   x P S R :   C   M a s k   * / 
 
 # d e f i n e   x P S R _ V _ P o s                                                   2 8 U                                                                                         / * ! <   x P S R :   V   P o s i t i o n   * / 
 # d e f i n e   x P S R _ V _ M s k                                                   ( 1 U L   < <   x P S R _ V _ P o s )                                                         / * ! <   x P S R :   V   M a s k   * / 
 
 # d e f i n e   x P S R _ T _ P o s                                                   2 4 U                                                                                         / * ! <   x P S R :   T   P o s i t i o n   * / 
 # d e f i n e   x P S R _ T _ M s k                                                   ( 1 U L   < <   x P S R _ T _ P o s )                                                         / * ! <   x P S R :   T   M a s k   * / 
 
 # d e f i n e   x P S R _ I S R _ P o s                                                 0 U                                                                                         / * ! <   x P S R :   I S R   P o s i t i o n   * / 
 # d e f i n e   x P S R _ I S R _ M s k                                               ( 0 x 1 F F U L   / * < <   x P S R _ I S R _ P o s * / )                                     / * ! <   x P S R :   I S R   M a s k   * / 
 
 
 / * * 
     \ b r i e f     U n i o n   t y p e   t o   a c c e s s   t h e   C o n t r o l   R e g i s t e r s   ( C O N T R O L ) . 
   * / 
 t y p e d e f   u n i o n 
 { 
     s t r u c t 
     { 
         u i n t 3 2 _ t   n P R I V : 1 ;                                         / * ! <   b i t :             0     E x e c u t i o n   p r i v i l e g e   i n   T h r e a d   m o d e   * / 
         u i n t 3 2 _ t   S P S E L : 1 ;                                         / * ! <   b i t :             1     S t a c k - p o i n t e r   s e l e c t   * / 
         u i n t 3 2 _ t   _ r e s e r v e d 1 : 3 0 ;                             / * ! <   b i t :     2 . . 3 1     R e s e r v e d   * / 
     }   b ;                                                                       / * ! <   S t r u c t u r e   u s e d   f o r   b i t     a c c e s s   * / 
     u i n t 3 2 _ t   w ;                                                         / * ! <   T y p e             u s e d   f o r   w o r d   a c c e s s   * / 
 }   C O N T R O L _ T y p e ; 
 
 / *   C O N T R O L   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   C O N T R O L _ S P S E L _ P o s                                       1 U                                                                                         / * ! <   C O N T R O L :   S P S E L   P o s i t i o n   * / 
 # d e f i n e   C O N T R O L _ S P S E L _ M s k                                     ( 1 U L   < <   C O N T R O L _ S P S E L _ P o s )                                           / * ! <   C O N T R O L :   S P S E L   M a s k   * / 
 
 # d e f i n e   C O N T R O L _ n P R I V _ P o s                                       0 U                                                                                         / * ! <   C O N T R O L :   n P R I V   P o s i t i o n   * / 
 # d e f i n e   C O N T R O L _ n P R I V _ M s k                                     ( 1 U L   / * < <   C O N T R O L _ n P R I V _ P o s * / )                                   / * ! <   C O N T R O L :   n P R I V   M a s k   * / 
 
 / * @ }   e n d   o f   g r o u p   C M S I S _ C O R E   * / 
 
 
 / * * 
     \ i n g r o u p         C M S I S _ c o r e _ r e g i s t e r 
     \ d e f g r o u p       C M S I S _ N V I C     N e s t e d   V e c t o r e d   I n t e r r u p t   C o n t r o l l e r   ( N V I C ) 
     \ b r i e f             T y p e   d e f i n i t i o n s   f o r   t h e   N V I C   R e g i s t e r s 
     @ { 
   * / 
 
 / * * 
     \ b r i e f     S t r u c t u r e   t y p e   t o   a c c e s s   t h e   N e s t e d   V e c t o r e d   I n t e r r u p t   C o n t r o l l e r   ( N V I C ) . 
   * / 
 t y p e d e f   s t r u c t 
 { 
     _ _ I O M   u i n t 3 2 _ t   I S E R [ 1 6 U ] ;                             / * ! <   O f f s e t :   0 x 0 0 0   ( R / W )     I n t e r r u p t   S e t   E n a b l e   R e g i s t e r   * / 
                 u i n t 3 2 _ t   R E S E R V E D 0 [ 1 6 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   I C E R [ 1 6 U ] ;                             / * ! <   O f f s e t :   0 x 0 8 0   ( R / W )     I n t e r r u p t   C l e a r   E n a b l e   R e g i s t e r   * / 
                 u i n t 3 2 _ t   R S E R V E D 1 [ 1 6 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   I S P R [ 1 6 U ] ;                             / * ! <   O f f s e t :   0 x 1 0 0   ( R / W )     I n t e r r u p t   S e t   P e n d i n g   R e g i s t e r   * / 
                 u i n t 3 2 _ t   R E S E R V E D 2 [ 1 6 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   I C P R [ 1 6 U ] ;                             / * ! <   O f f s e t :   0 x 1 8 0   ( R / W )     I n t e r r u p t   C l e a r   P e n d i n g   R e g i s t e r   * / 
                 u i n t 3 2 _ t   R E S E R V E D 3 [ 1 6 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   I A B R [ 1 6 U ] ;                             / * ! <   O f f s e t :   0 x 2 0 0   ( R / W )     I n t e r r u p t   A c t i v e   b i t   R e g i s t e r   * / 
                 u i n t 3 2 _ t   R E S E R V E D 4 [ 1 6 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   I T N S [ 1 6 U ] ;                             / * ! <   O f f s e t :   0 x 2 8 0   ( R / W )     I n t e r r u p t   N o n - S e c u r e   S t a t e   R e g i s t e r   * / 
                 u i n t 3 2 _ t   R E S E R V E D 5 [ 1 6 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   I P R [ 1 2 4 U ] ;                             / * ! <   O f f s e t :   0 x 3 0 0   ( R / W )     I n t e r r u p t   P r i o r i t y   R e g i s t e r   * / 
 }     N V I C _ T y p e ; 
 
 / * @ }   e n d   o f   g r o u p   C M S I S _ N V I C   * / 
 
 
 / * * 
     \ i n g r o u p     C M S I S _ c o r e _ r e g i s t e r 
     \ d e f g r o u p   C M S I S _ S C B           S y s t e m   C o n t r o l   B l o c k   ( S C B ) 
     \ b r i e f         T y p e   d e f i n i t i o n s   f o r   t h e   S y s t e m   C o n t r o l   B l o c k   R e g i s t e r s 
     @ { 
   * / 
 
 / * * 
     \ b r i e f     S t r u c t u r e   t y p e   t o   a c c e s s   t h e   S y s t e m   C o n t r o l   B l o c k   ( S C B ) . 
   * / 
 t y p e d e f   s t r u c t 
 { 
     _ _ I M     u i n t 3 2 _ t   C P U I D ;                                     / * ! <   O f f s e t :   0 x 0 0 0   ( R /   )     C P U I D   B a s e   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   I C S R ;                                       / * ! <   O f f s e t :   0 x 0 0 4   ( R / W )     I n t e r r u p t   C o n t r o l   a n d   S t a t e   R e g i s t e r   * / 
 # i f   d e f i n e d   ( _ _ V T O R _ P R E S E N T )   & &   ( _ _ V T O R _ P R E S E N T   = =   1 U ) 
     _ _ I O M   u i n t 3 2 _ t   V T O R ;                                       / * ! <   O f f s e t :   0 x 0 0 8   ( R / W )     V e c t o r   T a b l e   O f f s e t   R e g i s t e r   * / 
 # e l s e 
                 u i n t 3 2 _ t   R E S E R V E D 0 ; 
 # e n d i f 
     _ _ I O M   u i n t 3 2 _ t   A I R C R ;                                     / * ! <   O f f s e t :   0 x 0 0 C   ( R / W )     A p p l i c a t i o n   I n t e r r u p t   a n d   R e s e t   C o n t r o l   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   S C R ;                                         / * ! <   O f f s e t :   0 x 0 1 0   ( R / W )     S y s t e m   C o n t r o l   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   C C R ;                                         / * ! <   O f f s e t :   0 x 0 1 4   ( R / W )     C o n f i g u r a t i o n   C o n t r o l   R e g i s t e r   * / 
                 u i n t 3 2 _ t   R E S E R V E D 1 ; 
     _ _ I O M   u i n t 3 2 _ t   S H P R [ 2 U ] ;                               / * ! <   O f f s e t :   0 x 0 1 C   ( R / W )     S y s t e m   H a n d l e r s   P r i o r i t y   R e g i s t e r s .   [ 0 ]   i s   R E S E R V E D   * / 
     _ _ I O M   u i n t 3 2 _ t   S H C S R ;                                     / * ! <   O f f s e t :   0 x 0 2 4   ( R / W )     S y s t e m   H a n d l e r   C o n t r o l   a n d   S t a t e   R e g i s t e r   * / 
 }   S C B _ T y p e ; 
 
 / *   S C B   C P U I D   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   S C B _ C P U I D _ I M P L E M E N T E R _ P o s                     2 4 U                                                                                         / * ! <   S C B   C P U I D :   I M P L E M E N T E R   P o s i t i o n   * / 
 # d e f i n e   S C B _ C P U I D _ I M P L E M E N T E R _ M s k                     ( 0 x F F U L   < <   S C B _ C P U I D _ I M P L E M E N T E R _ P o s )                     / * ! <   S C B   C P U I D :   I M P L E M E N T E R   M a s k   * / 
 
 # d e f i n e   S C B _ C P U I D _ V A R I A N T _ P o s                             2 0 U                                                                                         / * ! <   S C B   C P U I D :   V A R I A N T   P o s i t i o n   * / 
 # d e f i n e   S C B _ C P U I D _ V A R I A N T _ M s k                             ( 0 x F U L   < <   S C B _ C P U I D _ V A R I A N T _ P o s )                               / * ! <   S C B   C P U I D :   V A R I A N T   M a s k   * / 
 
 # d e f i n e   S C B _ C P U I D _ A R C H I T E C T U R E _ P o s                   1 6 U                                                                                         / * ! <   S C B   C P U I D :   A R C H I T E C T U R E   P o s i t i o n   * / 
 # d e f i n e   S C B _ C P U I D _ A R C H I T E C T U R E _ M s k                   ( 0 x F U L   < <   S C B _ C P U I D _ A R C H I T E C T U R E _ P o s )                     / * ! <   S C B   C P U I D :   A R C H I T E C T U R E   M a s k   * / 
 
 # d e f i n e   S C B _ C P U I D _ P A R T N O _ P o s                                 4 U                                                                                         / * ! <   S C B   C P U I D :   P A R T N O   P o s i t i o n   * / 
 # d e f i n e   S C B _ C P U I D _ P A R T N O _ M s k                               ( 0 x F F F U L   < <   S C B _ C P U I D _ P A R T N O _ P o s )                             / * ! <   S C B   C P U I D :   P A R T N O   M a s k   * / 
 
 # d e f i n e   S C B _ C P U I D _ R E V I S I O N _ P o s                             0 U                                                                                         / * ! <   S C B   C P U I D :   R E V I S I O N   P o s i t i o n   * / 
 # d e f i n e   S C B _ C P U I D _ R E V I S I O N _ M s k                           ( 0 x F U L   / * < <   S C B _ C P U I D _ R E V I S I O N _ P o s * / )                     / * ! <   S C B   C P U I D :   R E V I S I O N   M a s k   * / 
 
 / *   S C B   I n t e r r u p t   C o n t r o l   S t a t e   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   S C B _ I C S R _ P E N D N M I S E T _ P o s                         3 1 U                                                                                         / * ! <   S C B   I C S R :   P E N D N M I S E T   P o s i t i o n   * / 
 # d e f i n e   S C B _ I C S R _ P E N D N M I S E T _ M s k                         ( 1 U L   < <   S C B _ I C S R _ P E N D N M I S E T _ P o s )                               / * ! <   S C B   I C S R :   P E N D N M I S E T   M a s k   * / 
 
 # d e f i n e   S C B _ I C S R _ N M I P E N D S E T _ P o s                         S C B _ I C S R _ P E N D N M I S E T _ P o s                                                 / * ! <   S C B   I C S R :   N M I P E N D S E T   P o s i t i o n ,   b a c k w a r d   c o m p a t i b i l i t y   * / 
 # d e f i n e   S C B _ I C S R _ N M I P E N D S E T _ M s k                         S C B _ I C S R _ P E N D N M I S E T _ M s k                                                 / * ! <   S C B   I C S R :   N M I P E N D S E T   M a s k ,   b a c k w a r d   c o m p a t i b i l i t y   * / 
 
 # d e f i n e   S C B _ I C S R _ P E N D N M I C L R _ P o s                         3 0 U                                                                                         / * ! <   S C B   I C S R :   P E N D N M I C L R   P o s i t i o n   * / 
 # d e f i n e   S C B _ I C S R _ P E N D N M I C L R _ M s k                         ( 1 U L   < <   S C B _ I C S R _ P E N D N M I C L R _ P o s )                               / * ! <   S C B   I C S R :   P E N D N M I C L R   M a s k   * / 
 
 # d e f i n e   S C B _ I C S R _ P E N D S V S E T _ P o s                           2 8 U                                                                                         / * ! <   S C B   I C S R :   P E N D S V S E T   P o s i t i o n   * / 
 # d e f i n e   S C B _ I C S R _ P E N D S V S E T _ M s k                           ( 1 U L   < <   S C B _ I C S R _ P E N D S V S E T _ P o s )                                 / * ! <   S C B   I C S R :   P E N D S V S E T   M a s k   * / 
 
 # d e f i n e   S C B _ I C S R _ P E N D S V C L R _ P o s                           2 7 U                                                                                         / * ! <   S C B   I C S R :   P E N D S V C L R   P o s i t i o n   * / 
 # d e f i n e   S C B _ I C S R _ P E N D S V C L R _ M s k                           ( 1 U L   < <   S C B _ I C S R _ P E N D S V C L R _ P o s )                                 / * ! <   S C B   I C S R :   P E N D S V C L R   M a s k   * / 
 
 # d e f i n e   S C B _ I C S R _ P E N D S T S E T _ P o s                           2 6 U                                                                                         / * ! <   S C B   I C S R :   P E N D S T S E T   P o s i t i o n   * / 
 # d e f i n e   S C B _ I C S R _ P E N D S T S E T _ M s k                           ( 1 U L   < <   S C B _ I C S R _ P E N D S T S E T _ P o s )                                 / * ! <   S C B   I C S R :   P E N D S T S E T   M a s k   * / 
 
 # d e f i n e   S C B _ I C S R _ P E N D S T C L R _ P o s                           2 5 U                                                                                         / * ! <   S C B   I C S R :   P E N D S T C L R   P o s i t i o n   * / 
 # d e f i n e   S C B _ I C S R _ P E N D S T C L R _ M s k                           ( 1 U L   < <   S C B _ I C S R _ P E N D S T C L R _ P o s )                                 / * ! <   S C B   I C S R :   P E N D S T C L R   M a s k   * / 
 
 # d e f i n e   S C B _ I C S R _ S T T N S _ P o s                                   2 4 U                                                                                         / * ! <   S C B   I C S R :   S T T N S   P o s i t i o n   ( S e c u r i t y   E x t e n s i o n )   * / 
 # d e f i n e   S C B _ I C S R _ S T T N S _ M s k                                   ( 1 U L   < <   S C B _ I C S R _ S T T N S _ P o s )                                         / * ! <   S C B   I C S R :   S T T N S   M a s k   ( S e c u r i t y   E x t e n s i o n )   * / 
 
 # d e f i n e   S C B _ I C S R _ I S R P R E E M P T _ P o s                         2 3 U                                                                                         / * ! <   S C B   I C S R :   I S R P R E E M P T   P o s i t i o n   * / 
 # d e f i n e   S C B _ I C S R _ I S R P R E E M P T _ M s k                         ( 1 U L   < <   S C B _ I C S R _ I S R P R E E M P T _ P o s )                               / * ! <   S C B   I C S R :   I S R P R E E M P T   M a s k   * / 
 
 # d e f i n e   S C B _ I C S R _ I S R P E N D I N G _ P o s                         2 2 U                                                                                         / * ! <   S C B   I C S R :   I S R P E N D I N G   P o s i t i o n   * / 
 # d e f i n e   S C B _ I C S R _ I S R P E N D I N G _ M s k                         ( 1 U L   < <   S C B _ I C S R _ I S R P E N D I N G _ P o s )                               / * ! <   S C B   I C S R :   I S R P E N D I N G   M a s k   * / 
 
 # d e f i n e   S C B _ I C S R _ V E C T P E N D I N G _ P o s                       1 2 U                                                                                         / * ! <   S C B   I C S R :   V E C T P E N D I N G   P o s i t i o n   * / 
 # d e f i n e   S C B _ I C S R _ V E C T P E N D I N G _ M s k                       ( 0 x 1 F F U L   < <   S C B _ I C S R _ V E C T P E N D I N G _ P o s )                     / * ! <   S C B   I C S R :   V E C T P E N D I N G   M a s k   * / 
 
 # d e f i n e   S C B _ I C S R _ R E T T O B A S E _ P o s                           1 1 U                                                                                         / * ! <   S C B   I C S R :   R E T T O B A S E   P o s i t i o n   * / 
 # d e f i n e   S C B _ I C S R _ R E T T O B A S E _ M s k                           ( 1 U L   < <   S C B _ I C S R _ R E T T O B A S E _ P o s )                                 / * ! <   S C B   I C S R :   R E T T O B A S E   M a s k   * / 
 
 # d e f i n e   S C B _ I C S R _ V E C T A C T I V E _ P o s                           0 U                                                                                         / * ! <   S C B   I C S R :   V E C T A C T I V E   P o s i t i o n   * / 
 # d e f i n e   S C B _ I C S R _ V E C T A C T I V E _ M s k                         ( 0 x 1 F F U L   / * < <   S C B _ I C S R _ V E C T A C T I V E _ P o s * / )               / * ! <   S C B   I C S R :   V E C T A C T I V E   M a s k   * / 
 
 # i f   d e f i n e d   ( _ _ V T O R _ P R E S E N T )   & &   ( _ _ V T O R _ P R E S E N T   = =   1 U ) 
 / *   S C B   V e c t o r   T a b l e   O f f s e t   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   S C B _ V T O R _ T B L O F F _ P o s                                   7 U                                                                                         / * ! <   S C B   V T O R :   T B L O F F   P o s i t i o n   * / 
 # d e f i n e   S C B _ V T O R _ T B L O F F _ M s k                                 ( 0 x 1 F F F F F F U L   < <   S C B _ V T O R _ T B L O F F _ P o s )                       / * ! <   S C B   V T O R :   T B L O F F   M a s k   * / 
 # e n d i f 
 
 / *   S C B   A p p l i c a t i o n   I n t e r r u p t   a n d   R e s e t   C o n t r o l   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   S C B _ A I R C R _ V E C T K E Y _ P o s                             1 6 U                                                                                         / * ! <   S C B   A I R C R :   V E C T K E Y   P o s i t i o n   * / 
 # d e f i n e   S C B _ A I R C R _ V E C T K E Y _ M s k                             ( 0 x F F F F U L   < <   S C B _ A I R C R _ V E C T K E Y _ P o s )                         / * ! <   S C B   A I R C R :   V E C T K E Y   M a s k   * / 
 
 # d e f i n e   S C B _ A I R C R _ V E C T K E Y S T A T _ P o s                     1 6 U                                                                                         / * ! <   S C B   A I R C R :   V E C T K E Y S T A T   P o s i t i o n   * / 
 # d e f i n e   S C B _ A I R C R _ V E C T K E Y S T A T _ M s k                     ( 0 x F F F F U L   < <   S C B _ A I R C R _ V E C T K E Y S T A T _ P o s )                 / * ! <   S C B   A I R C R :   V E C T K E Y S T A T   M a s k   * / 
 
 # d e f i n e   S C B _ A I R C R _ E N D I A N E S S _ P o s                         1 5 U                                                                                         / * ! <   S C B   A I R C R :   E N D I A N E S S   P o s i t i o n   * / 
 # d e f i n e   S C B _ A I R C R _ E N D I A N E S S _ M s k                         ( 1 U L   < <   S C B _ A I R C R _ E N D I A N E S S _ P o s )                               / * ! <   S C B   A I R C R :   E N D I A N E S S   M a s k   * / 
 
 # d e f i n e   S C B _ A I R C R _ P R I S _ P o s                                   1 4 U                                                                                         / * ! <   S C B   A I R C R :   P R I S   P o s i t i o n   * / 
 # d e f i n e   S C B _ A I R C R _ P R I S _ M s k                                   ( 1 U L   < <   S C B _ A I R C R _ P R I S _ P o s )                                         / * ! <   S C B   A I R C R :   P R I S   M a s k   * / 
 
 # d e f i n e   S C B _ A I R C R _ B F H F N M I N S _ P o s                         1 3 U                                                                                         / * ! <   S C B   A I R C R :   B F H F N M I N S   P o s i t i o n   * / 
 # d e f i n e   S C B _ A I R C R _ B F H F N M I N S _ M s k                         ( 1 U L   < <   S C B _ A I R C R _ B F H F N M I N S _ P o s )                               / * ! <   S C B   A I R C R :   B F H F N M I N S   M a s k   * / 
 
 # d e f i n e   S C B _ A I R C R _ S Y S R E S E T R E Q S _ P o s                     3 U                                                                                         / * ! <   S C B   A I R C R :   S Y S R E S E T R E Q S   P o s i t i o n   * / 
 # d e f i n e   S C B _ A I R C R _ S Y S R E S E T R E Q S _ M s k                   ( 1 U L   < <   S C B _ A I R C R _ S Y S R E S E T R E Q S _ P o s )                         / * ! <   S C B   A I R C R :   S Y S R E S E T R E Q S   M a s k   * / 
 
 # d e f i n e   S C B _ A I R C R _ S Y S R E S E T R E Q _ P o s                       2 U                                                                                         / * ! <   S C B   A I R C R :   S Y S R E S E T R E Q   P o s i t i o n   * / 
 # d e f i n e   S C B _ A I R C R _ S Y S R E S E T R E Q _ M s k                     ( 1 U L   < <   S C B _ A I R C R _ S Y S R E S E T R E Q _ P o s )                           / * ! <   S C B   A I R C R :   S Y S R E S E T R E Q   M a s k   * / 
 
 # d e f i n e   S C B _ A I R C R _ V E C T C L R A C T I V E _ P o s                   1 U                                                                                         / * ! <   S C B   A I R C R :   V E C T C L R A C T I V E   P o s i t i o n   * / 
 # d e f i n e   S C B _ A I R C R _ V E C T C L R A C T I V E _ M s k                 ( 1 U L   < <   S C B _ A I R C R _ V E C T C L R A C T I V E _ P o s )                       / * ! <   S C B   A I R C R :   V E C T C L R A C T I V E   M a s k   * / 
 
 / *   S C B   S y s t e m   C o n t r o l   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   S C B _ S C R _ S E V O N P E N D _ P o s                               4 U                                                                                         / * ! <   S C B   S C R :   S E V O N P E N D   P o s i t i o n   * / 
 # d e f i n e   S C B _ S C R _ S E V O N P E N D _ M s k                             ( 1 U L   < <   S C B _ S C R _ S E V O N P E N D _ P o s )                                   / * ! <   S C B   S C R :   S E V O N P E N D   M a s k   * / 
 
 # d e f i n e   S C B _ S C R _ S L E E P D E E P S _ P o s                             3 U                                                                                         / * ! <   S C B   S C R :   S L E E P D E E P S   P o s i t i o n   * / 
 # d e f i n e   S C B _ S C R _ S L E E P D E E P S _ M s k                           ( 1 U L   < <   S C B _ S C R _ S L E E P D E E P S _ P o s )                                 / * ! <   S C B   S C R :   S L E E P D E E P S   M a s k   * / 
 
 # d e f i n e   S C B _ S C R _ S L E E P D E E P _ P o s                               2 U                                                                                         / * ! <   S C B   S C R :   S L E E P D E E P   P o s i t i o n   * / 
 # d e f i n e   S C B _ S C R _ S L E E P D E E P _ M s k                             ( 1 U L   < <   S C B _ S C R _ S L E E P D E E P _ P o s )                                   / * ! <   S C B   S C R :   S L E E P D E E P   M a s k   * / 
 
 # d e f i n e   S C B _ S C R _ S L E E P O N E X I T _ P o s                           1 U                                                                                         / * ! <   S C B   S C R :   S L E E P O N E X I T   P o s i t i o n   * / 
 # d e f i n e   S C B _ S C R _ S L E E P O N E X I T _ M s k                         ( 1 U L   < <   S C B _ S C R _ S L E E P O N E X I T _ P o s )                               / * ! <   S C B   S C R :   S L E E P O N E X I T   M a s k   * / 
 
 / *   S C B   C o n f i g u r a t i o n   C o n t r o l   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   S C B _ C C R _ B P _ P o s                                           1 8 U                                                                                         / * ! <   S C B   C C R :   B P   P o s i t i o n   * / 
 # d e f i n e   S C B _ C C R _ B P _ M s k                                           ( 1 U L   < <   S C B _ C C R _ B P _ P o s )                                                 / * ! <   S C B   C C R :   B P   M a s k   * / 
 
 # d e f i n e   S C B _ C C R _ I C _ P o s                                           1 7 U                                                                                         / * ! <   S C B   C C R :   I C   P o s i t i o n   * / 
 # d e f i n e   S C B _ C C R _ I C _ M s k                                           ( 1 U L   < <   S C B _ C C R _ I C _ P o s )                                                 / * ! <   S C B   C C R :   I C   M a s k   * / 
 
 # d e f i n e   S C B _ C C R _ D C _ P o s                                           1 6 U                                                                                         / * ! <   S C B   C C R :   D C   P o s i t i o n   * / 
 # d e f i n e   S C B _ C C R _ D C _ M s k                                           ( 1 U L   < <   S C B _ C C R _ D C _ P o s )                                                 / * ! <   S C B   C C R :   D C   M a s k   * / 
 
 # d e f i n e   S C B _ C C R _ S T K O F H F N M I G N _ P o s                       1 0 U                                                                                         / * ! <   S C B   C C R :   S T K O F H F N M I G N   P o s i t i o n   * / 
 # d e f i n e   S C B _ C C R _ S T K O F H F N M I G N _ M s k                       ( 1 U L   < <   S C B _ C C R _ S T K O F H F N M I G N _ P o s )                             / * ! <   S C B   C C R :   S T K O F H F N M I G N   M a s k   * / 
 
 # d e f i n e   S C B _ C C R _ B F H F N M I G N _ P o s                               8 U                                                                                         / * ! <   S C B   C C R :   B F H F N M I G N   P o s i t i o n   * / 
 # d e f i n e   S C B _ C C R _ B F H F N M I G N _ M s k                             ( 1 U L   < <   S C B _ C C R _ B F H F N M I G N _ P o s )                                   / * ! <   S C B   C C R :   B F H F N M I G N   M a s k   * / 
 
 # d e f i n e   S C B _ C C R _ D I V _ 0 _ T R P _ P o s                               4 U                                                                                         / * ! <   S C B   C C R :   D I V _ 0 _ T R P   P o s i t i o n   * / 
 # d e f i n e   S C B _ C C R _ D I V _ 0 _ T R P _ M s k                             ( 1 U L   < <   S C B _ C C R _ D I V _ 0 _ T R P _ P o s )                                   / * ! <   S C B   C C R :   D I V _ 0 _ T R P   M a s k   * / 
 
 # d e f i n e   S C B _ C C R _ U N A L I G N _ T R P _ P o s                           3 U                                                                                         / * ! <   S C B   C C R :   U N A L I G N _ T R P   P o s i t i o n   * / 
 # d e f i n e   S C B _ C C R _ U N A L I G N _ T R P _ M s k                         ( 1 U L   < <   S C B _ C C R _ U N A L I G N _ T R P _ P o s )                               / * ! <   S C B   C C R :   U N A L I G N _ T R P   M a s k   * / 
 
 # d e f i n e   S C B _ C C R _ U S E R S E T M P E N D _ P o s                         1 U                                                                                         / * ! <   S C B   C C R :   U S E R S E T M P E N D   P o s i t i o n   * / 
 # d e f i n e   S C B _ C C R _ U S E R S E T M P E N D _ M s k                       ( 1 U L   < <   S C B _ C C R _ U S E R S E T M P E N D _ P o s )                             / * ! <   S C B   C C R :   U S E R S E T M P E N D   M a s k   * / 
 
 / *   S C B   S y s t e m   H a n d l e r   C o n t r o l   a n d   S t a t e   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   S C B _ S H C S R _ H A R D F A U L T P E N D E D _ P o s             2 1 U                                                                                         / * ! <   S C B   S H C S R :   H A R D F A U L T P E N D E D   P o s i t i o n   * / 
 # d e f i n e   S C B _ S H C S R _ H A R D F A U L T P E N D E D _ M s k             ( 1 U L   < <   S C B _ S H C S R _ H A R D F A U L T P E N D E D _ P o s )                   / * ! <   S C B   S H C S R :   H A R D F A U L T P E N D E D   M a s k   * / 
 
 # d e f i n e   S C B _ S H C S R _ S V C A L L P E N D E D _ P o s                   1 5 U                                                                                         / * ! <   S C B   S H C S R :   S V C A L L P E N D E D   P o s i t i o n   * / 
 # d e f i n e   S C B _ S H C S R _ S V C A L L P E N D E D _ M s k                   ( 1 U L   < <   S C B _ S H C S R _ S V C A L L P E N D E D _ P o s )                         / * ! <   S C B   S H C S R :   S V C A L L P E N D E D   M a s k   * / 
 
 # d e f i n e   S C B _ S H C S R _ S Y S T I C K A C T _ P o s                       1 1 U                                                                                         / * ! <   S C B   S H C S R :   S Y S T I C K A C T   P o s i t i o n   * / 
 # d e f i n e   S C B _ S H C S R _ S Y S T I C K A C T _ M s k                       ( 1 U L   < <   S C B _ S H C S R _ S Y S T I C K A C T _ P o s )                             / * ! <   S C B   S H C S R :   S Y S T I C K A C T   M a s k   * / 
 
 # d e f i n e   S C B _ S H C S R _ P E N D S V A C T _ P o s                         1 0 U                                                                                         / * ! <   S C B   S H C S R :   P E N D S V A C T   P o s i t i o n   * / 
 # d e f i n e   S C B _ S H C S R _ P E N D S V A C T _ M s k                         ( 1 U L   < <   S C B _ S H C S R _ P E N D S V A C T _ P o s )                               / * ! <   S C B   S H C S R :   P E N D S V A C T   M a s k   * / 
 
 # d e f i n e   S C B _ S H C S R _ S V C A L L A C T _ P o s                           7 U                                                                                         / * ! <   S C B   S H C S R :   S V C A L L A C T   P o s i t i o n   * / 
 # d e f i n e   S C B _ S H C S R _ S V C A L L A C T _ M s k                         ( 1 U L   < <   S C B _ S H C S R _ S V C A L L A C T _ P o s )                               / * ! <   S C B   S H C S R :   S V C A L L A C T   M a s k   * / 
 
 # d e f i n e   S C B _ S H C S R _ N M I A C T _ P o s                                 5 U                                                                                         / * ! <   S C B   S H C S R :   N M I A C T   P o s i t i o n   * / 
 # d e f i n e   S C B _ S H C S R _ N M I A C T _ M s k                               ( 1 U L   < <   S C B _ S H C S R _ N M I A C T _ P o s )                                     / * ! <   S C B   S H C S R :   N M I A C T   M a s k   * / 
 
 # d e f i n e   S C B _ S H C S R _ H A R D F A U L T A C T _ P o s                     2 U                                                                                         / * ! <   S C B   S H C S R :   H A R D F A U L T A C T   P o s i t i o n   * / 
 # d e f i n e   S C B _ S H C S R _ H A R D F A U L T A C T _ M s k                   ( 1 U L   < <   S C B _ S H C S R _ H A R D F A U L T A C T _ P o s )                         / * ! <   S C B   S H C S R :   H A R D F A U L T A C T   M a s k   * / 
 
 / * @ }   e n d   o f   g r o u p   C M S I S _ S C B   * / 
 
 
 / * * 
     \ i n g r o u p     C M S I S _ c o r e _ r e g i s t e r 
     \ d e f g r o u p   C M S I S _ S y s T i c k           S y s t e m   T i c k   T i m e r   ( S y s T i c k ) 
     \ b r i e f         T y p e   d e f i n i t i o n s   f o r   t h e   S y s t e m   T i m e r   R e g i s t e r s . 
     @ { 
   * / 
 
 / * * 
     \ b r i e f     S t r u c t u r e   t y p e   t o   a c c e s s   t h e   S y s t e m   T i m e r   ( S y s T i c k ) . 
   * / 
 t y p e d e f   s t r u c t 
 { 
     _ _ I O M   u i n t 3 2 _ t   C T R L ;                                       / * ! <   O f f s e t :   0 x 0 0 0   ( R / W )     S y s T i c k   C o n t r o l   a n d   S t a t u s   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   L O A D ;                                       / * ! <   O f f s e t :   0 x 0 0 4   ( R / W )     S y s T i c k   R e l o a d   V a l u e   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   V A L ;                                         / * ! <   O f f s e t :   0 x 0 0 8   ( R / W )     S y s T i c k   C u r r e n t   V a l u e   R e g i s t e r   * / 
     _ _ I M     u i n t 3 2 _ t   C A L I B ;                                     / * ! <   O f f s e t :   0 x 0 0 C   ( R /   )     S y s T i c k   C a l i b r a t i o n   R e g i s t e r   * / 
 }   S y s T i c k _ T y p e ; 
 
 / *   S y s T i c k   C o n t r o l   /   S t a t u s   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   S y s T i c k _ C T R L _ C O U N T F L A G _ P o s                   1 6 U                                                                                         / * ! <   S y s T i c k   C T R L :   C O U N T F L A G   P o s i t i o n   * / 
 # d e f i n e   S y s T i c k _ C T R L _ C O U N T F L A G _ M s k                   ( 1 U L   < <   S y s T i c k _ C T R L _ C O U N T F L A G _ P o s )                         / * ! <   S y s T i c k   C T R L :   C O U N T F L A G   M a s k   * / 
 
 # d e f i n e   S y s T i c k _ C T R L _ C L K S O U R C E _ P o s                     2 U                                                                                         / * ! <   S y s T i c k   C T R L :   C L K S O U R C E   P o s i t i o n   * / 
 # d e f i n e   S y s T i c k _ C T R L _ C L K S O U R C E _ M s k                   ( 1 U L   < <   S y s T i c k _ C T R L _ C L K S O U R C E _ P o s )                         / * ! <   S y s T i c k   C T R L :   C L K S O U R C E   M a s k   * / 
 
 # d e f i n e   S y s T i c k _ C T R L _ T I C K I N T _ P o s                         1 U                                                                                         / * ! <   S y s T i c k   C T R L :   T I C K I N T   P o s i t i o n   * / 
 # d e f i n e   S y s T i c k _ C T R L _ T I C K I N T _ M s k                       ( 1 U L   < <   S y s T i c k _ C T R L _ T I C K I N T _ P o s )                             / * ! <   S y s T i c k   C T R L :   T I C K I N T   M a s k   * / 
 
 # d e f i n e   S y s T i c k _ C T R L _ E N A B L E _ P o s                           0 U                                                                                         / * ! <   S y s T i c k   C T R L :   E N A B L E   P o s i t i o n   * / 
 # d e f i n e   S y s T i c k _ C T R L _ E N A B L E _ M s k                         ( 1 U L   / * < <   S y s T i c k _ C T R L _ E N A B L E _ P o s * / )                       / * ! <   S y s T i c k   C T R L :   E N A B L E   M a s k   * / 
 
 / *   S y s T i c k   R e l o a d   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   S y s T i c k _ L O A D _ R E L O A D _ P o s                           0 U                                                                                         / * ! <   S y s T i c k   L O A D :   R E L O A D   P o s i t i o n   * / 
 # d e f i n e   S y s T i c k _ L O A D _ R E L O A D _ M s k                         ( 0 x F F F F F F U L   / * < <   S y s T i c k _ L O A D _ R E L O A D _ P o s * / )         / * ! <   S y s T i c k   L O A D :   R E L O A D   M a s k   * / 
 
 / *   S y s T i c k   C u r r e n t   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   S y s T i c k _ V A L _ C U R R E N T _ P o s                           0 U                                                                                         / * ! <   S y s T i c k   V A L :   C U R R E N T   P o s i t i o n   * / 
 # d e f i n e   S y s T i c k _ V A L _ C U R R E N T _ M s k                         ( 0 x F F F F F F U L   / * < <   S y s T i c k _ V A L _ C U R R E N T _ P o s * / )         / * ! <   S y s T i c k   V A L :   C U R R E N T   M a s k   * / 
 
 / *   S y s T i c k   C a l i b r a t i o n   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   S y s T i c k _ C A L I B _ N O R E F _ P o s                         3 1 U                                                                                         / * ! <   S y s T i c k   C A L I B :   N O R E F   P o s i t i o n   * / 
 # d e f i n e   S y s T i c k _ C A L I B _ N O R E F _ M s k                         ( 1 U L   < <   S y s T i c k _ C A L I B _ N O R E F _ P o s )                               / * ! <   S y s T i c k   C A L I B :   N O R E F   M a s k   * / 
 
 # d e f i n e   S y s T i c k _ C A L I B _ S K E W _ P o s                           3 0 U                                                                                         / * ! <   S y s T i c k   C A L I B :   S K E W   P o s i t i o n   * / 
 # d e f i n e   S y s T i c k _ C A L I B _ S K E W _ M s k                           ( 1 U L   < <   S y s T i c k _ C A L I B _ S K E W _ P o s )                                 / * ! <   S y s T i c k   C A L I B :   S K E W   M a s k   * / 
 
 # d e f i n e   S y s T i c k _ C A L I B _ T E N M S _ P o s                           0 U                                                                                         / * ! <   S y s T i c k   C A L I B :   T E N M S   P o s i t i o n   * / 
 # d e f i n e   S y s T i c k _ C A L I B _ T E N M S _ M s k                         ( 0 x F F F F F F U L   / * < <   S y s T i c k _ C A L I B _ T E N M S _ P o s * / )         / * ! <   S y s T i c k   C A L I B :   T E N M S   M a s k   * / 
 
 / * @ }   e n d   o f   g r o u p   C M S I S _ S y s T i c k   * / 
 
 
 / * * 
     \ i n g r o u p     C M S I S _ c o r e _ r e g i s t e r 
     \ d e f g r o u p   C M S I S _ D W T           D a t a   W a t c h p o i n t   a n d   T r a c e   ( D W T ) 
     \ b r i e f         T y p e   d e f i n i t i o n s   f o r   t h e   D a t a   W a t c h p o i n t   a n d   T r a c e   ( D W T ) 
     @ { 
   * / 
 
 / * * 
     \ b r i e f     S t r u c t u r e   t y p e   t o   a c c e s s   t h e   D a t a   W a t c h p o i n t   a n d   T r a c e   R e g i s t e r   ( D W T ) . 
   * / 
 t y p e d e f   s t r u c t 
 { 
     _ _ I O M   u i n t 3 2 _ t   C T R L ;                                       / * ! <   O f f s e t :   0 x 0 0 0   ( R / W )     C o n t r o l   R e g i s t e r   * / 
                 u i n t 3 2 _ t   R E S E R V E D 0 [ 6 U ] ; 
     _ _ I M     u i n t 3 2 _ t   P C S R ;                                       / * ! <   O f f s e t :   0 x 0 1 C   ( R /   )     P r o g r a m   C o u n t e r   S a m p l e   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   C O M P 0 ;                                     / * ! <   O f f s e t :   0 x 0 2 0   ( R / W )     C o m p a r a t o r   R e g i s t e r   0   * / 
                 u i n t 3 2 _ t   R E S E R V E D 1 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   F U N C T I O N 0 ;                             / * ! <   O f f s e t :   0 x 0 2 8   ( R / W )     F u n c t i o n   R e g i s t e r   0   * / 
                 u i n t 3 2 _ t   R E S E R V E D 2 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   C O M P 1 ;                                     / * ! <   O f f s e t :   0 x 0 3 0   ( R / W )     C o m p a r a t o r   R e g i s t e r   1   * / 
                 u i n t 3 2 _ t   R E S E R V E D 3 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   F U N C T I O N 1 ;                             / * ! <   O f f s e t :   0 x 0 3 8   ( R / W )     F u n c t i o n   R e g i s t e r   1   * / 
                 u i n t 3 2 _ t   R E S E R V E D 4 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   C O M P 2 ;                                     / * ! <   O f f s e t :   0 x 0 4 0   ( R / W )     C o m p a r a t o r   R e g i s t e r   2   * / 
                 u i n t 3 2 _ t   R E S E R V E D 5 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   F U N C T I O N 2 ;                             / * ! <   O f f s e t :   0 x 0 4 8   ( R / W )     F u n c t i o n   R e g i s t e r   2   * / 
                 u i n t 3 2 _ t   R E S E R V E D 6 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   C O M P 3 ;                                     / * ! <   O f f s e t :   0 x 0 5 0   ( R / W )     C o m p a r a t o r   R e g i s t e r   3   * / 
                 u i n t 3 2 _ t   R E S E R V E D 7 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   F U N C T I O N 3 ;                             / * ! <   O f f s e t :   0 x 0 5 8   ( R / W )     F u n c t i o n   R e g i s t e r   3   * / 
                 u i n t 3 2 _ t   R E S E R V E D 8 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   C O M P 4 ;                                     / * ! <   O f f s e t :   0 x 0 6 0   ( R / W )     C o m p a r a t o r   R e g i s t e r   4   * / 
                 u i n t 3 2 _ t   R E S E R V E D 9 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   F U N C T I O N 4 ;                             / * ! <   O f f s e t :   0 x 0 6 8   ( R / W )     F u n c t i o n   R e g i s t e r   4   * / 
                 u i n t 3 2 _ t   R E S E R V E D 1 0 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   C O M P 5 ;                                     / * ! <   O f f s e t :   0 x 0 7 0   ( R / W )     C o m p a r a t o r   R e g i s t e r   5   * / 
                 u i n t 3 2 _ t   R E S E R V E D 1 1 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   F U N C T I O N 5 ;                             / * ! <   O f f s e t :   0 x 0 7 8   ( R / W )     F u n c t i o n   R e g i s t e r   5   * / 
                 u i n t 3 2 _ t   R E S E R V E D 1 2 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   C O M P 6 ;                                     / * ! <   O f f s e t :   0 x 0 8 0   ( R / W )     C o m p a r a t o r   R e g i s t e r   6   * / 
                 u i n t 3 2 _ t   R E S E R V E D 1 3 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   F U N C T I O N 6 ;                             / * ! <   O f f s e t :   0 x 0 8 8   ( R / W )     F u n c t i o n   R e g i s t e r   6   * / 
                 u i n t 3 2 _ t   R E S E R V E D 1 4 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   C O M P 7 ;                                     / * ! <   O f f s e t :   0 x 0 9 0   ( R / W )     C o m p a r a t o r   R e g i s t e r   7   * / 
                 u i n t 3 2 _ t   R E S E R V E D 1 5 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   F U N C T I O N 7 ;                             / * ! <   O f f s e t :   0 x 0 9 8   ( R / W )     F u n c t i o n   R e g i s t e r   7   * / 
                 u i n t 3 2 _ t   R E S E R V E D 1 6 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   C O M P 8 ;                                     / * ! <   O f f s e t :   0 x 0 A 0   ( R / W )     C o m p a r a t o r   R e g i s t e r   8   * / 
                 u i n t 3 2 _ t   R E S E R V E D 1 7 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   F U N C T I O N 8 ;                             / * ! <   O f f s e t :   0 x 0 A 8   ( R / W )     F u n c t i o n   R e g i s t e r   8   * / 
                 u i n t 3 2 _ t   R E S E R V E D 1 8 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   C O M P 9 ;                                     / * ! <   O f f s e t :   0 x 0 B 0   ( R / W )     C o m p a r a t o r   R e g i s t e r   9   * / 
                 u i n t 3 2 _ t   R E S E R V E D 1 9 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   F U N C T I O N 9 ;                             / * ! <   O f f s e t :   0 x 0 B 8   ( R / W )     F u n c t i o n   R e g i s t e r   9   * / 
                 u i n t 3 2 _ t   R E S E R V E D 2 0 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   C O M P 1 0 ;                                   / * ! <   O f f s e t :   0 x 0 C 0   ( R / W )     C o m p a r a t o r   R e g i s t e r   1 0   * / 
                 u i n t 3 2 _ t   R E S E R V E D 2 1 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   F U N C T I O N 1 0 ;                           / * ! <   O f f s e t :   0 x 0 C 8   ( R / W )     F u n c t i o n   R e g i s t e r   1 0   * / 
                 u i n t 3 2 _ t   R E S E R V E D 2 2 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   C O M P 1 1 ;                                   / * ! <   O f f s e t :   0 x 0 D 0   ( R / W )     C o m p a r a t o r   R e g i s t e r   1 1   * / 
                 u i n t 3 2 _ t   R E S E R V E D 2 3 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   F U N C T I O N 1 1 ;                           / * ! <   O f f s e t :   0 x 0 D 8   ( R / W )     F u n c t i o n   R e g i s t e r   1 1   * / 
                 u i n t 3 2 _ t   R E S E R V E D 2 4 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   C O M P 1 2 ;                                   / * ! <   O f f s e t :   0 x 0 E 0   ( R / W )     C o m p a r a t o r   R e g i s t e r   1 2   * / 
                 u i n t 3 2 _ t   R E S E R V E D 2 5 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   F U N C T I O N 1 2 ;                           / * ! <   O f f s e t :   0 x 0 E 8   ( R / W )     F u n c t i o n   R e g i s t e r   1 2   * / 
                 u i n t 3 2 _ t   R E S E R V E D 2 6 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   C O M P 1 3 ;                                   / * ! <   O f f s e t :   0 x 0 F 0   ( R / W )     C o m p a r a t o r   R e g i s t e r   1 3   * / 
                 u i n t 3 2 _ t   R E S E R V E D 2 7 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   F U N C T I O N 1 3 ;                           / * ! <   O f f s e t :   0 x 0 F 8   ( R / W )     F u n c t i o n   R e g i s t e r   1 3   * / 
                 u i n t 3 2 _ t   R E S E R V E D 2 8 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   C O M P 1 4 ;                                   / * ! <   O f f s e t :   0 x 1 0 0   ( R / W )     C o m p a r a t o r   R e g i s t e r   1 4   * / 
                 u i n t 3 2 _ t   R E S E R V E D 2 9 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   F U N C T I O N 1 4 ;                           / * ! <   O f f s e t :   0 x 1 0 8   ( R / W )     F u n c t i o n   R e g i s t e r   1 4   * / 
                 u i n t 3 2 _ t   R E S E R V E D 3 0 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   C O M P 1 5 ;                                   / * ! <   O f f s e t :   0 x 1 1 0   ( R / W )     C o m p a r a t o r   R e g i s t e r   1 5   * / 
                 u i n t 3 2 _ t   R E S E R V E D 3 1 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   F U N C T I O N 1 5 ;                           / * ! <   O f f s e t :   0 x 1 1 8   ( R / W )     F u n c t i o n   R e g i s t e r   1 5   * / 
 }   D W T _ T y p e ; 
 
 / *   D W T   C o n t r o l   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   D W T _ C T R L _ N U M C O M P _ P o s                               2 8 U                                                                                   / * ! <   D W T   C T R L :   N U M C O M P   P o s i t i o n   * / 
 # d e f i n e   D W T _ C T R L _ N U M C O M P _ M s k                               ( 0 x F U L   < <   D W T _ C T R L _ N U M C O M P _ P o s )                           / * ! <   D W T   C T R L :   N U M C O M P   M a s k   * / 
 
 # d e f i n e   D W T _ C T R L _ N O T R C P K T _ P o s                             2 7 U                                                                                   / * ! <   D W T   C T R L :   N O T R C P K T   P o s i t i o n   * / 
 # d e f i n e   D W T _ C T R L _ N O T R C P K T _ M s k                             ( 0 x 1 U L   < <   D W T _ C T R L _ N O T R C P K T _ P o s )                         / * ! <   D W T   C T R L :   N O T R C P K T   M a s k   * / 
 
 # d e f i n e   D W T _ C T R L _ N O E X T T R I G _ P o s                           2 6 U                                                                                   / * ! <   D W T   C T R L :   N O E X T T R I G   P o s i t i o n   * / 
 # d e f i n e   D W T _ C T R L _ N O E X T T R I G _ M s k                           ( 0 x 1 U L   < <   D W T _ C T R L _ N O E X T T R I G _ P o s )                       / * ! <   D W T   C T R L :   N O E X T T R I G   M a s k   * / 
 
 # d e f i n e   D W T _ C T R L _ N O C Y C C N T _ P o s                             2 5 U                                                                                   / * ! <   D W T   C T R L :   N O C Y C C N T   P o s i t i o n   * / 
 # d e f i n e   D W T _ C T R L _ N O C Y C C N T _ M s k                             ( 0 x 1 U L   < <   D W T _ C T R L _ N O C Y C C N T _ P o s )                         / * ! <   D W T   C T R L :   N O C Y C C N T   M a s k   * / 
 
 # d e f i n e   D W T _ C T R L _ N O P R F C N T _ P o s                             2 4 U                                                                                   / * ! <   D W T   C T R L :   N O P R F C N T   P o s i t i o n   * / 
 # d e f i n e   D W T _ C T R L _ N O P R F C N T _ M s k                             ( 0 x 1 U L   < <   D W T _ C T R L _ N O P R F C N T _ P o s )                         / * ! <   D W T   C T R L :   N O P R F C N T   M a s k   * / 
 
 / *   D W T   C o m p a r a t o r   F u n c t i o n   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   D W T _ F U N C T I O N _ I D _ P o s                                 2 7 U                                                                                   / * ! <   D W T   F U N C T I O N :   I D   P o s i t i o n   * / 
 # d e f i n e   D W T _ F U N C T I O N _ I D _ M s k                                 ( 0 x 1 F U L   < <   D W T _ F U N C T I O N _ I D _ P o s )                           / * ! <   D W T   F U N C T I O N :   I D   M a s k   * / 
 
 # d e f i n e   D W T _ F U N C T I O N _ M A T C H E D _ P o s                       2 4 U                                                                                   / * ! <   D W T   F U N C T I O N :   M A T C H E D   P o s i t i o n   * / 
 # d e f i n e   D W T _ F U N C T I O N _ M A T C H E D _ M s k                       ( 0 x 1 U L   < <   D W T _ F U N C T I O N _ M A T C H E D _ P o s )                   / * ! <   D W T   F U N C T I O N :   M A T C H E D   M a s k   * / 
 
 # d e f i n e   D W T _ F U N C T I O N _ D A T A V S I Z E _ P o s                   1 0 U                                                                                   / * ! <   D W T   F U N C T I O N :   D A T A V S I Z E   P o s i t i o n   * / 
 # d e f i n e   D W T _ F U N C T I O N _ D A T A V S I Z E _ M s k                   ( 0 x 3 U L   < <   D W T _ F U N C T I O N _ D A T A V S I Z E _ P o s )               / * ! <   D W T   F U N C T I O N :   D A T A V S I Z E   M a s k   * / 
 
 # d e f i n e   D W T _ F U N C T I O N _ A C T I O N _ P o s                           4 U                                                                                   / * ! <   D W T   F U N C T I O N :   A C T I O N   P o s i t i o n   * / 
 # d e f i n e   D W T _ F U N C T I O N _ A C T I O N _ M s k                         ( 0 x 3 U L   < <   D W T _ F U N C T I O N _ A C T I O N _ P o s )                     / * ! <   D W T   F U N C T I O N :   A C T I O N   M a s k   * / 
 
 # d e f i n e   D W T _ F U N C T I O N _ M A T C H _ P o s                             0 U                                                                                   / * ! <   D W T   F U N C T I O N :   M A T C H   P o s i t i o n   * / 
 # d e f i n e   D W T _ F U N C T I O N _ M A T C H _ M s k                           ( 0 x F U L   / * < <   D W T _ F U N C T I O N _ M A T C H _ P o s * / )               / * ! <   D W T   F U N C T I O N :   M A T C H   M a s k   * / 
 
 / * @ } * /   / *   e n d   o f   g r o u p   C M S I S _ D W T   * / 
 
 
 / * * 
     \ i n g r o u p     C M S I S _ c o r e _ r e g i s t e r 
     \ d e f g r o u p   C M S I S _ T P I           T r a c e   P o r t   I n t e r f a c e   ( T P I ) 
     \ b r i e f         T y p e   d e f i n i t i o n s   f o r   t h e   T r a c e   P o r t   I n t e r f a c e   ( T P I ) 
     @ { 
   * / 
 
 / * * 
     \ b r i e f     S t r u c t u r e   t y p e   t o   a c c e s s   t h e   T r a c e   P o r t   I n t e r f a c e   R e g i s t e r   ( T P I ) . 
   * / 
 t y p e d e f   s t r u c t 
 { 
     _ _ I M     u i n t 3 2 _ t   S S P S R ;                                     / * ! <   O f f s e t :   0 x 0 0 0   ( R /   )     S u p p o r t e d   P a r a l l e l   P o r t   S i z e   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   C S P S R ;                                     / * ! <   O f f s e t :   0 x 0 0 4   ( R / W )     C u r r e n t   P a r a l l e l   P o r t   S i z e   R e g i s t e r   * / 
                 u i n t 3 2 _ t   R E S E R V E D 0 [ 2 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   A C P R ;                                       / * ! <   O f f s e t :   0 x 0 1 0   ( R / W )     A s y n c h r o n o u s   C l o c k   P r e s c a l e r   R e g i s t e r   * / 
                 u i n t 3 2 _ t   R E S E R V E D 1 [ 5 5 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   S P P R ;                                       / * ! <   O f f s e t :   0 x 0 F 0   ( R / W )     S e l e c t e d   P i n   P r o t o c o l   R e g i s t e r   * / 
                 u i n t 3 2 _ t   R E S E R V E D 2 [ 1 3 1 U ] ; 
     _ _ I M     u i n t 3 2 _ t   F F S R ;                                       / * ! <   O f f s e t :   0 x 3 0 0   ( R /   )     F o r m a t t e r   a n d   F l u s h   S t a t u s   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   F F C R ;                                       / * ! <   O f f s e t :   0 x 3 0 4   ( R / W )     F o r m a t t e r   a n d   F l u s h   C o n t r o l   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   P S C R ;                                       / * ! <   O f f s e t :   0 x 3 0 8   ( R / W )     P e r i o d i c   S y n c h r o n i z a t i o n   C o n t r o l   R e g i s t e r   * / 
                 u i n t 3 2 _ t   R E S E R V E D 3 [ 7 5 9 U ] ; 
     _ _ I M     u i n t 3 2 _ t   T R I G G E R ;                                 / * ! <   O f f s e t :   0 x E E 8   ( R /   )     T R I G G E R   R e g i s t e r   * / 
     _ _ I M     u i n t 3 2 _ t   I T F T T D 0 ;                                 / * ! <   O f f s e t :   0 x E E C   ( R /   )     I n t e g r a t i o n   T e s t   F I F O   T e s t   D a t a   0   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   I T A T B C T R 2 ;                             / * ! <   O f f s e t :   0 x E F 0   ( R / W )     I n t e g r a t i o n   T e s t   A T B   C o n t r o l   R e g i s t e r   2   * / 
                 u i n t 3 2 _ t   R E S E R V E D 4 [ 1 U ] ; 
     _ _ I M     u i n t 3 2 _ t   I T A T B C T R 0 ;                             / * ! <   O f f s e t :   0 x E F 8   ( R /   )     I n t e g r a t i o n   T e s t   A T B   C o n t r o l   R e g i s t e r   0   * / 
     _ _ I M     u i n t 3 2 _ t   I T F T T D 1 ;                                 / * ! <   O f f s e t :   0 x E F C   ( R /   )     I n t e g r a t i o n   T e s t   F I F O   T e s t   D a t a   1   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   I T C T R L ;                                   / * ! <   O f f s e t :   0 x F 0 0   ( R / W )     I n t e g r a t i o n   M o d e   C o n t r o l   * / 
                 u i n t 3 2 _ t   R E S E R V E D 5 [ 3 9 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   C L A I M S E T ;                               / * ! <   O f f s e t :   0 x F A 0   ( R / W )     C l a i m   t a g   s e t   * / 
     _ _ I O M   u i n t 3 2 _ t   C L A I M C L R ;                               / * ! <   O f f s e t :   0 x F A 4   ( R / W )     C l a i m   t a g   c l e a r   * / 
                 u i n t 3 2 _ t   R E S E R V E D 7 [ 8 U ] ; 
     _ _ I M     u i n t 3 2 _ t   D E V I D ;                                     / * ! <   O f f s e t :   0 x F C 8   ( R /   )     D e v i c e   C o n f i g u r a t i o n   R e g i s t e r   * / 
     _ _ I M     u i n t 3 2 _ t   D E V T Y P E ;                                 / * ! <   O f f s e t :   0 x F C C   ( R /   )     D e v i c e   T y p e   I d e n t i f i e r   R e g i s t e r   * / 
 }   T P I _ T y p e ; 
 
 / *   T P I   A s y n c h r o n o u s   C l o c k   P r e s c a l e r   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   T P I _ A C P R _ P R E S C A L E R _ P o s                             0 U                                                                                   / * ! <   T P I   A C P R :   P R E S C A L E R   P o s i t i o n   * / 
 # d e f i n e   T P I _ A C P R _ P R E S C A L E R _ M s k                           ( 0 x 1 F F F U L   / * < <   T P I _ A C P R _ P R E S C A L E R _ P o s * / )         / * ! <   T P I   A C P R :   P R E S C A L E R   M a s k   * / 
 
 / *   T P I   S e l e c t e d   P i n   P r o t o c o l   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   T P I _ S P P R _ T X M O D E _ P o s                                   0 U                                                                                   / * ! <   T P I   S P P R :   T X M O D E   P o s i t i o n   * / 
 # d e f i n e   T P I _ S P P R _ T X M O D E _ M s k                                 ( 0 x 3 U L   / * < <   T P I _ S P P R _ T X M O D E _ P o s * / )                     / * ! <   T P I   S P P R :   T X M O D E   M a s k   * / 
 
 / *   T P I   F o r m a t t e r   a n d   F l u s h   S t a t u s   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   T P I _ F F S R _ F t N o n S t o p _ P o s                             3 U                                                                                   / * ! <   T P I   F F S R :   F t N o n S t o p   P o s i t i o n   * / 
 # d e f i n e   T P I _ F F S R _ F t N o n S t o p _ M s k                           ( 0 x 1 U L   < <   T P I _ F F S R _ F t N o n S t o p _ P o s )                       / * ! <   T P I   F F S R :   F t N o n S t o p   M a s k   * / 
 
 # d e f i n e   T P I _ F F S R _ T C P r e s e n t _ P o s                             2 U                                                                                   / * ! <   T P I   F F S R :   T C P r e s e n t   P o s i t i o n   * / 
 # d e f i n e   T P I _ F F S R _ T C P r e s e n t _ M s k                           ( 0 x 1 U L   < <   T P I _ F F S R _ T C P r e s e n t _ P o s )                       / * ! <   T P I   F F S R :   T C P r e s e n t   M a s k   * / 
 
 # d e f i n e   T P I _ F F S R _ F t S t o p p e d _ P o s                             1 U                                                                                   / * ! <   T P I   F F S R :   F t S t o p p e d   P o s i t i o n   * / 
 # d e f i n e   T P I _ F F S R _ F t S t o p p e d _ M s k                           ( 0 x 1 U L   < <   T P I _ F F S R _ F t S t o p p e d _ P o s )                       / * ! <   T P I   F F S R :   F t S t o p p e d   M a s k   * / 
 
 # d e f i n e   T P I _ F F S R _ F l I n P r o g _ P o s                               0 U                                                                                   / * ! <   T P I   F F S R :   F l I n P r o g   P o s i t i o n   * / 
 # d e f i n e   T P I _ F F S R _ F l I n P r o g _ M s k                             ( 0 x 1 U L   / * < <   T P I _ F F S R _ F l I n P r o g _ P o s * / )                 / * ! <   T P I   F F S R :   F l I n P r o g   M a s k   * / 
 
 / *   T P I   F o r m a t t e r   a n d   F l u s h   C o n t r o l   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   T P I _ F F C R _ T r i g I n _ P o s                                   8 U                                                                                   / * ! <   T P I   F F C R :   T r i g I n   P o s i t i o n   * / 
 # d e f i n e   T P I _ F F C R _ T r i g I n _ M s k                                 ( 0 x 1 U L   < <   T P I _ F F C R _ T r i g I n _ P o s )                             / * ! <   T P I   F F C R :   T r i g I n   M a s k   * / 
 
 # d e f i n e   T P I _ F F C R _ F O n M a n _ P o s                                   6 U                                                                                   / * ! <   T P I   F F C R :   F O n M a n   P o s i t i o n   * / 
 # d e f i n e   T P I _ F F C R _ F O n M a n _ M s k                                 ( 0 x 1 U L   < <   T P I _ F F C R _ F O n M a n _ P o s )                             / * ! <   T P I   F F C R :   F O n M a n   M a s k   * / 
 
 # d e f i n e   T P I _ F F C R _ E n F C o n t _ P o s                                 1 U                                                                                   / * ! <   T P I   F F C R :   E n F C o n t   P o s i t i o n   * / 
 # d e f i n e   T P I _ F F C R _ E n F C o n t _ M s k                               ( 0 x 1 U L   < <   T P I _ F F C R _ E n F C o n t _ P o s )                           / * ! <   T P I   F F C R :   E n F C o n t   M a s k   * / 
 
 / *   T P I   T R I G G E R   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   T P I _ T R I G G E R _ T R I G G E R _ P o s                           0 U                                                                                   / * ! <   T P I   T R I G G E R :   T R I G G E R   P o s i t i o n   * / 
 # d e f i n e   T P I _ T R I G G E R _ T R I G G E R _ M s k                         ( 0 x 1 U L   / * < <   T P I _ T R I G G E R _ T R I G G E R _ P o s * / )             / * ! <   T P I   T R I G G E R :   T R I G G E R   M a s k   * / 
 
 / *   T P I   I n t e g r a t i o n   T e s t   F I F O   T e s t   D a t a   0   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   T P I _ I T F T T D 0 _ A T B _ I F 2 _ A T V A L I D _ P o s         2 9 U                                                                                   / * ! <   T P I   I T F T T D 0 :   A T B   I n t e r f a c e   2   A T V A L I D P o s i t i o n   * / 
 # d e f i n e   T P I _ I T F T T D 0 _ A T B _ I F 2 _ A T V A L I D _ M s k         ( 0 x 3 U L   < <   T P I _ I T F T T D 0 _ A T B _ I F 2 _ A T V A L I D _ P o s )     / * ! <   T P I   I T F T T D 0 :   A T B   I n t e r f a c e   2   A T V A L I D   M a s k   * / 
 
 # d e f i n e   T P I _ I T F T T D 0 _ A T B _ I F 2 _ b y t e c o u n t _ P o s     2 7 U                                                                                   / * ! <   T P I   I T F T T D 0 :   A T B   I n t e r f a c e   2   b y t e   c o u n t   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T F T T D 0 _ A T B _ I F 2 _ b y t e c o u n t _ M s k     ( 0 x 3 U L   < <   T P I _ I T F T T D 0 _ A T B _ I F 2 _ b y t e c o u n t _ P o s )   / * ! <   T P I   I T F T T D 0 :   A T B   I n t e r f a c e   2   b y t e   c o u n t   M a s k   * / 
 
 # d e f i n e   T P I _ I T F T T D 0 _ A T B _ I F 1 _ A T V A L I D _ P o s         2 6 U                                                                                   / * ! <   T P I   I T F T T D 0 :   A T B   I n t e r f a c e   1   A T V A L I D   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T F T T D 0 _ A T B _ I F 1 _ A T V A L I D _ M s k         ( 0 x 3 U L   < <   T P I _ I T F T T D 0 _ A T B _ I F 1 _ A T V A L I D _ P o s )     / * ! <   T P I   I T F T T D 0 :   A T B   I n t e r f a c e   1   A T V A L I D   M a s k   * / 
 
 # d e f i n e   T P I _ I T F T T D 0 _ A T B _ I F 1 _ b y t e c o u n t _ P o s     2 4 U                                                                                   / * ! <   T P I   I T F T T D 0 :   A T B   I n t e r f a c e   1   b y t e   c o u n t   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T F T T D 0 _ A T B _ I F 1 _ b y t e c o u n t _ M s k     ( 0 x 3 U L   < <   T P I _ I T F T T D 0 _ A T B _ I F 1 _ b y t e c o u n t _ P o s )   / * ! <   T P I   I T F T T D 0 :   A T B   I n t e r f a c e   1   b y t e   c o u n t t   M a s k   * / 
 
 # d e f i n e   T P I _ I T F T T D 0 _ A T B _ I F 1 _ d a t a 2 _ P o s             1 6 U                                                                                   / * ! <   T P I   I T F T T D 0 :   A T B   I n t e r f a c e   1   d a t a 2   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T F T T D 0 _ A T B _ I F 1 _ d a t a 2 _ M s k             ( 0 x F F U L   < <   T P I _ I T F T T D 0 _ A T B _ I F 1 _ d a t a 1 _ P o s )       / * ! <   T P I   I T F T T D 0 :   A T B   I n t e r f a c e   1   d a t a 2   M a s k   * / 
 
 # d e f i n e   T P I _ I T F T T D 0 _ A T B _ I F 1 _ d a t a 1 _ P o s               8 U                                                                                   / * ! <   T P I   I T F T T D 0 :   A T B   I n t e r f a c e   1   d a t a 1   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T F T T D 0 _ A T B _ I F 1 _ d a t a 1 _ M s k             ( 0 x F F U L   < <   T P I _ I T F T T D 0 _ A T B _ I F 1 _ d a t a 1 _ P o s )       / * ! <   T P I   I T F T T D 0 :   A T B   I n t e r f a c e   1   d a t a 1   M a s k   * / 
 
 # d e f i n e   T P I _ I T F T T D 0 _ A T B _ I F 1 _ d a t a 0 _ P o s               0 U                                                                                     / * ! <   T P I   I T F T T D 0 :   A T B   I n t e r f a c e   1   d a t a 0   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T F T T D 0 _ A T B _ I F 1 _ d a t a 0 _ M s k             ( 0 x F F U L   / * < <   T P I _ I T F T T D 0 _ A T B _ I F 1 _ d a t a 0 _ P o s * / )   / * ! <   T P I   I T F T T D 0 :   A T B   I n t e r f a c e   1   d a t a 0   M a s k   * / 
 
 / *   T P I   I n t e g r a t i o n   T e s t   A T B   C o n t r o l   R e g i s t e r   2   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   T P I _ I T A T B C T R 2 _ A F V A L I D 2 S _ P o s                   1 U                                                                                   / * ! <   T P I   I T A T B C T R 2 :   A F V A L I D 2 S   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T A T B C T R 2 _ A F V A L I D 2 S _ M s k                 ( 0 x 1 U L   < <   T P I _ I T A T B C T R 2 _ A F V A L I D 2 S _ P o s )             / * ! <   T P I   I T A T B C T R 2 :   A F V A L I D 2 S S   M a s k   * / 
 
 # d e f i n e   T P I _ I T A T B C T R 2 _ A F V A L I D 1 S _ P o s                   1 U                                                                                   / * ! <   T P I   I T A T B C T R 2 :   A F V A L I D 1 S   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T A T B C T R 2 _ A F V A L I D 1 S _ M s k                 ( 0 x 1 U L   < <   T P I _ I T A T B C T R 2 _ A F V A L I D 1 S _ P o s )             / * ! <   T P I   I T A T B C T R 2 :   A F V A L I D 1 S S   M a s k   * / 
 
 # d e f i n e   T P I _ I T A T B C T R 2 _ A T R E A D Y 2 S _ P o s                   0 U                                                                                   / * ! <   T P I   I T A T B C T R 2 :   A T R E A D Y 2 S   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T A T B C T R 2 _ A T R E A D Y 2 S _ M s k                 ( 0 x 1 U L   / * < <   T P I _ I T A T B C T R 2 _ A T R E A D Y 2 S _ P o s * / )     / * ! <   T P I   I T A T B C T R 2 :   A T R E A D Y 2 S   M a s k   * / 
 
 # d e f i n e   T P I _ I T A T B C T R 2 _ A T R E A D Y 1 S _ P o s                   0 U                                                                                   / * ! <   T P I   I T A T B C T R 2 :   A T R E A D Y 1 S   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T A T B C T R 2 _ A T R E A D Y 1 S _ M s k                 ( 0 x 1 U L   / * < <   T P I _ I T A T B C T R 2 _ A T R E A D Y 1 S _ P o s * / )     / * ! <   T P I   I T A T B C T R 2 :   A T R E A D Y 1 S   M a s k   * / 
 
 / *   T P I   I n t e g r a t i o n   T e s t   F I F O   T e s t   D a t a   1   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   T P I _ I T F T T D 1 _ A T B _ I F 2 _ A T V A L I D _ P o s         2 9 U                                                                                   / * ! <   T P I   I T F T T D 1 :   A T B   I n t e r f a c e   2   A T V A L I D   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T F T T D 1 _ A T B _ I F 2 _ A T V A L I D _ M s k         ( 0 x 3 U L   < <   T P I _ I T F T T D 1 _ A T B _ I F 2 _ A T V A L I D _ P o s )     / * ! <   T P I   I T F T T D 1 :   A T B   I n t e r f a c e   2   A T V A L I D   M a s k   * / 
 
 # d e f i n e   T P I _ I T F T T D 1 _ A T B _ I F 2 _ b y t e c o u n t _ P o s     2 7 U                                                                                   / * ! <   T P I   I T F T T D 1 :   A T B   I n t e r f a c e   2   b y t e   c o u n t   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T F T T D 1 _ A T B _ I F 2 _ b y t e c o u n t _ M s k     ( 0 x 3 U L   < <   T P I _ I T F T T D 1 _ A T B _ I F 2 _ b y t e c o u n t _ P o s )   / * ! <   T P I   I T F T T D 1 :   A T B   I n t e r f a c e   2   b y t e   c o u n t   M a s k   * / 
 
 # d e f i n e   T P I _ I T F T T D 1 _ A T B _ I F 1 _ A T V A L I D _ P o s         2 6 U                                                                                   / * ! <   T P I   I T F T T D 1 :   A T B   I n t e r f a c e   1   A T V A L I D   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T F T T D 1 _ A T B _ I F 1 _ A T V A L I D _ M s k         ( 0 x 3 U L   < <   T P I _ I T F T T D 1 _ A T B _ I F 1 _ A T V A L I D _ P o s )     / * ! <   T P I   I T F T T D 1 :   A T B   I n t e r f a c e   1   A T V A L I D   M a s k   * / 
 
 # d e f i n e   T P I _ I T F T T D 1 _ A T B _ I F 1 _ b y t e c o u n t _ P o s     2 4 U                                                                                   / * ! <   T P I   I T F T T D 1 :   A T B   I n t e r f a c e   1   b y t e   c o u n t   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T F T T D 1 _ A T B _ I F 1 _ b y t e c o u n t _ M s k     ( 0 x 3 U L   < <   T P I _ I T F T T D 1 _ A T B _ I F 1 _ b y t e c o u n t _ P o s )   / * ! <   T P I   I T F T T D 1 :   A T B   I n t e r f a c e   1   b y t e   c o u n t t   M a s k   * / 
 
 # d e f i n e   T P I _ I T F T T D 1 _ A T B _ I F 2 _ d a t a 2 _ P o s             1 6 U                                                                                   / * ! <   T P I   I T F T T D 1 :   A T B   I n t e r f a c e   2   d a t a 2   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T F T T D 1 _ A T B _ I F 2 _ d a t a 2 _ M s k             ( 0 x F F U L   < <   T P I _ I T F T T D 1 _ A T B _ I F 2 _ d a t a 1 _ P o s )       / * ! <   T P I   I T F T T D 1 :   A T B   I n t e r f a c e   2   d a t a 2   M a s k   * / 
 
 # d e f i n e   T P I _ I T F T T D 1 _ A T B _ I F 2 _ d a t a 1 _ P o s               8 U                                                                                   / * ! <   T P I   I T F T T D 1 :   A T B   I n t e r f a c e   2   d a t a 1   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T F T T D 1 _ A T B _ I F 2 _ d a t a 1 _ M s k             ( 0 x F F U L   < <   T P I _ I T F T T D 1 _ A T B _ I F 2 _ d a t a 1 _ P o s )       / * ! <   T P I   I T F T T D 1 :   A T B   I n t e r f a c e   2   d a t a 1   M a s k   * / 
 
 # d e f i n e   T P I _ I T F T T D 1 _ A T B _ I F 2 _ d a t a 0 _ P o s               0 U                                                                                     / * ! <   T P I   I T F T T D 1 :   A T B   I n t e r f a c e   2   d a t a 0   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T F T T D 1 _ A T B _ I F 2 _ d a t a 0 _ M s k             ( 0 x F F U L   / * < <   T P I _ I T F T T D 1 _ A T B _ I F 2 _ d a t a 0 _ P o s * / )   / * ! <   T P I   I T F T T D 1 :   A T B   I n t e r f a c e   2   d a t a 0   M a s k   * / 
 
 / *   T P I   I n t e g r a t i o n   T e s t   A T B   C o n t r o l   R e g i s t e r   0   D e f i n i t i o n s   * / 
 # d e f i n e   T P I _ I T A T B C T R 0 _ A F V A L I D 2 S _ P o s                   1 U                                                                                   / * ! <   T P I   I T A T B C T R 0 :   A F V A L I D 2 S   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T A T B C T R 0 _ A F V A L I D 2 S _ M s k                 ( 0 x 1 U L   < <   T P I _ I T A T B C T R 0 _ A F V A L I D 2 S _ P o s )             / * ! <   T P I   I T A T B C T R 0 :   A F V A L I D 2 S S   M a s k   * / 
 
 # d e f i n e   T P I _ I T A T B C T R 0 _ A F V A L I D 1 S _ P o s                   1 U                                                                                   / * ! <   T P I   I T A T B C T R 0 :   A F V A L I D 1 S   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T A T B C T R 0 _ A F V A L I D 1 S _ M s k                 ( 0 x 1 U L   < <   T P I _ I T A T B C T R 0 _ A F V A L I D 1 S _ P o s )             / * ! <   T P I   I T A T B C T R 0 :   A F V A L I D 1 S S   M a s k   * / 
 
 # d e f i n e   T P I _ I T A T B C T R 0 _ A T R E A D Y 2 S _ P o s                   0 U                                                                                   / * ! <   T P I   I T A T B C T R 0 :   A T R E A D Y 2 S   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T A T B C T R 0 _ A T R E A D Y 2 S _ M s k                 ( 0 x 1 U L   / * < <   T P I _ I T A T B C T R 0 _ A T R E A D Y 2 S _ P o s * / )     / * ! <   T P I   I T A T B C T R 0 :   A T R E A D Y 2 S   M a s k   * / 
 
 # d e f i n e   T P I _ I T A T B C T R 0 _ A T R E A D Y 1 S _ P o s                   0 U                                                                                   / * ! <   T P I   I T A T B C T R 0 :   A T R E A D Y 1 S   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T A T B C T R 0 _ A T R E A D Y 1 S _ M s k                 ( 0 x 1 U L   / * < <   T P I _ I T A T B C T R 0 _ A T R E A D Y 1 S _ P o s * / )     / * ! <   T P I   I T A T B C T R 0 :   A T R E A D Y 1 S   M a s k   * / 
 
 / *   T P I   I n t e g r a t i o n   M o d e   C o n t r o l   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   T P I _ I T C T R L _ M o d e _ P o s                                   0 U                                                                                   / * ! <   T P I   I T C T R L :   M o d e   P o s i t i o n   * / 
 # d e f i n e   T P I _ I T C T R L _ M o d e _ M s k                                 ( 0 x 3 U L   / * < <   T P I _ I T C T R L _ M o d e _ P o s * / )                     / * ! <   T P I   I T C T R L :   M o d e   M a s k   * / 
 
 / *   T P I   D E V I D   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   T P I _ D E V I D _ N R Z V A L I D _ P o s                           1 1 U                                                                                   / * ! <   T P I   D E V I D :   N R Z V A L I D   P o s i t i o n   * / 
 # d e f i n e   T P I _ D E V I D _ N R Z V A L I D _ M s k                           ( 0 x 1 U L   < <   T P I _ D E V I D _ N R Z V A L I D _ P o s )                       / * ! <   T P I   D E V I D :   N R Z V A L I D   M a s k   * / 
 
 # d e f i n e   T P I _ D E V I D _ M A N C V A L I D _ P o s                         1 0 U                                                                                   / * ! <   T P I   D E V I D :   M A N C V A L I D   P o s i t i o n   * / 
 # d e f i n e   T P I _ D E V I D _ M A N C V A L I D _ M s k                         ( 0 x 1 U L   < <   T P I _ D E V I D _ M A N C V A L I D _ P o s )                     / * ! <   T P I   D E V I D :   M A N C V A L I D   M a s k   * / 
 
 # d e f i n e   T P I _ D E V I D _ P T I N V A L I D _ P o s                           9 U                                                                                   / * ! <   T P I   D E V I D :   P T I N V A L I D   P o s i t i o n   * / 
 # d e f i n e   T P I _ D E V I D _ P T I N V A L I D _ M s k                         ( 0 x 1 U L   < <   T P I _ D E V I D _ P T I N V A L I D _ P o s )                     / * ! <   T P I   D E V I D :   P T I N V A L I D   M a s k   * / 
 
 # d e f i n e   T P I _ D E V I D _ F I F O S Z _ P o s                                 6 U                                                                                   / * ! <   T P I   D E V I D :   F I F O S Z   P o s i t i o n   * / 
 # d e f i n e   T P I _ D E V I D _ F I F O S Z _ M s k                               ( 0 x 7 U L   < <   T P I _ D E V I D _ F I F O S Z _ P o s )                           / * ! <   T P I   D E V I D :   F I F O S Z   M a s k   * / 
 
 # d e f i n e   T P I _ D E V I D _ N r T r a c e I n p u t _ P o s                     0 U                                                                                   / * ! <   T P I   D E V I D :   N r T r a c e I n p u t   P o s i t i o n   * / 
 # d e f i n e   T P I _ D E V I D _ N r T r a c e I n p u t _ M s k                   ( 0 x 3 F U L   / * < <   T P I _ D E V I D _ N r T r a c e I n p u t _ P o s * / )     / * ! <   T P I   D E V I D :   N r T r a c e I n p u t   M a s k   * / 
 
 / *   T P I   D E V T Y P E   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   T P I _ D E V T Y P E _ S u b T y p e _ P o s                           4 U                                                                                   / * ! <   T P I   D E V T Y P E :   S u b T y p e   P o s i t i o n   * / 
 # d e f i n e   T P I _ D E V T Y P E _ S u b T y p e _ M s k                         ( 0 x F U L   / * < <   T P I _ D E V T Y P E _ S u b T y p e _ P o s * / )             / * ! <   T P I   D E V T Y P E :   S u b T y p e   M a s k   * / 
 
 # d e f i n e   T P I _ D E V T Y P E _ M a j o r T y p e _ P o s                       0 U                                                                                   / * ! <   T P I   D E V T Y P E :   M a j o r T y p e   P o s i t i o n   * / 
 # d e f i n e   T P I _ D E V T Y P E _ M a j o r T y p e _ M s k                     ( 0 x F U L   < <   T P I _ D E V T Y P E _ M a j o r T y p e _ P o s )                 / * ! <   T P I   D E V T Y P E :   M a j o r T y p e   M a s k   * / 
 
 / * @ } * /   / *   e n d   o f   g r o u p   C M S I S _ T P I   * / 
 
 
 # i f   d e f i n e d   ( _ _ M P U _ P R E S E N T )   & &   ( _ _ M P U _ P R E S E N T   = =   1 U ) 
 / * * 
     \ i n g r o u p     C M S I S _ c o r e _ r e g i s t e r 
     \ d e f g r o u p   C M S I S _ M P U           M e m o r y   P r o t e c t i o n   U n i t   ( M P U ) 
     \ b r i e f         T y p e   d e f i n i t i o n s   f o r   t h e   M e m o r y   P r o t e c t i o n   U n i t   ( M P U ) 
     @ { 
   * / 
 
 / * * 
     \ b r i e f     S t r u c t u r e   t y p e   t o   a c c e s s   t h e   M e m o r y   P r o t e c t i o n   U n i t   ( M P U ) . 
   * / 
 t y p e d e f   s t r u c t 
 { 
     _ _ I M     u i n t 3 2 _ t   T Y P E ;                                       / * ! <   O f f s e t :   0 x 0 0 0   ( R /   )     M P U   T y p e   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   C T R L ;                                       / * ! <   O f f s e t :   0 x 0 0 4   ( R / W )     M P U   C o n t r o l   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   R N R ;                                         / * ! <   O f f s e t :   0 x 0 0 8   ( R / W )     M P U   R e g i o n   N u m b e r   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   R B A R ;                                       / * ! <   O f f s e t :   0 x 0 0 C   ( R / W )     M P U   R e g i o n   B a s e   A d d r e s s   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   R L A R ;                                       / * ! <   O f f s e t :   0 x 0 1 0   ( R / W )     M P U   R e g i o n   L i m i t   A d d r e s s   R e g i s t e r   * / 
                 u i n t 3 2 _ t   R E S E R V E D 0 [ 7 U ] ; 
     u n i o n   { 
     _ _ I O M   u i n t 3 2 _ t   M A I R [ 2 ] ; 
     s t r u c t   { 
     _ _ I O M   u i n t 3 2 _ t   M A I R 0 ;                                     / * ! <   O f f s e t :   0 x 0 3 0   ( R / W )     M P U   M e m o r y   A t t r i b u t e   I n d i r e c t i o n   R e g i s t e r   0   * / 
     _ _ I O M   u i n t 3 2 _ t   M A I R 1 ;                                     / * ! <   O f f s e t :   0 x 0 3 4   ( R / W )     M P U   M e m o r y   A t t r i b u t e   I n d i r e c t i o n   R e g i s t e r   1   * / 
     } ; 
     } ; 
 }   M P U _ T y p e ; 
 
 # d e f i n e   M P U _ T Y P E _ R A L I A S E S                                     1 U 
 
 / *   M P U   T y p e   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   M P U _ T Y P E _ I R E G I O N _ P o s                               1 6 U                                                                                         / * ! <   M P U   T Y P E :   I R E G I O N   P o s i t i o n   * / 
 # d e f i n e   M P U _ T Y P E _ I R E G I O N _ M s k                               ( 0 x F F U L   < <   M P U _ T Y P E _ I R E G I O N _ P o s )                               / * ! <   M P U   T Y P E :   I R E G I O N   M a s k   * / 
 
 # d e f i n e   M P U _ T Y P E _ D R E G I O N _ P o s                                 8 U                                                                                         / * ! <   M P U   T Y P E :   D R E G I O N   P o s i t i o n   * / 
 # d e f i n e   M P U _ T Y P E _ D R E G I O N _ M s k                               ( 0 x F F U L   < <   M P U _ T Y P E _ D R E G I O N _ P o s )                               / * ! <   M P U   T Y P E :   D R E G I O N   M a s k   * / 
 
 # d e f i n e   M P U _ T Y P E _ S E P A R A T E _ P o s                               0 U                                                                                         / * ! <   M P U   T Y P E :   S E P A R A T E   P o s i t i o n   * / 
 # d e f i n e   M P U _ T Y P E _ S E P A R A T E _ M s k                             ( 1 U L   / * < <   M P U _ T Y P E _ S E P A R A T E _ P o s * / )                           / * ! <   M P U   T Y P E :   S E P A R A T E   M a s k   * / 
 
 / *   M P U   C o n t r o l   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   M P U _ C T R L _ P R I V D E F E N A _ P o s                           2 U                                                                                         / * ! <   M P U   C T R L :   P R I V D E F E N A   P o s i t i o n   * / 
 # d e f i n e   M P U _ C T R L _ P R I V D E F E N A _ M s k                         ( 1 U L   < <   M P U _ C T R L _ P R I V D E F E N A _ P o s )                               / * ! <   M P U   C T R L :   P R I V D E F E N A   M a s k   * / 
 
 # d e f i n e   M P U _ C T R L _ H F N M I E N A _ P o s                               1 U                                                                                         / * ! <   M P U   C T R L :   H F N M I E N A   P o s i t i o n   * / 
 # d e f i n e   M P U _ C T R L _ H F N M I E N A _ M s k                             ( 1 U L   < <   M P U _ C T R L _ H F N M I E N A _ P o s )                                   / * ! <   M P U   C T R L :   H F N M I E N A   M a s k   * / 
 
 # d e f i n e   M P U _ C T R L _ E N A B L E _ P o s                                   0 U                                                                                         / * ! <   M P U   C T R L :   E N A B L E   P o s i t i o n   * / 
 # d e f i n e   M P U _ C T R L _ E N A B L E _ M s k                                 ( 1 U L   / * < <   M P U _ C T R L _ E N A B L E _ P o s * / )                               / * ! <   M P U   C T R L :   E N A B L E   M a s k   * / 
 
 / *   M P U   R e g i o n   N u m b e r   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   M P U _ R N R _ R E G I O N _ P o s                                     0 U                                                                                         / * ! <   M P U   R N R :   R E G I O N   P o s i t i o n   * / 
 # d e f i n e   M P U _ R N R _ R E G I O N _ M s k                                   ( 0 x F F U L   / * < <   M P U _ R N R _ R E G I O N _ P o s * / )                           / * ! <   M P U   R N R :   R E G I O N   M a s k   * / 
 
 / *   M P U   R e g i o n   B a s e   A d d r e s s   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   M P U _ R B A R _ B A S E _ P o s                                       5 U                                                                                         / * ! <   M P U   R B A R :   B A S E   P o s i t i o n   * / 
 # d e f i n e   M P U _ R B A R _ B A S E _ M s k                                     ( 0 x 7 F F F F F F U L   < <   M P U _ R B A R _ B A S E _ P o s )                           / * ! <   M P U   R B A R :   B A S E   M a s k   * / 
 
 # d e f i n e   M P U _ R B A R _ S H _ P o s                                           3 U                                                                                         / * ! <   M P U   R B A R :   S H   P o s i t i o n   * / 
 # d e f i n e   M P U _ R B A R _ S H _ M s k                                         ( 0 x 3 U L   < <   M P U _ R B A R _ S H _ P o s )                                           / * ! <   M P U   R B A R :   S H   M a s k   * / 
 
 # d e f i n e   M P U _ R B A R _ A P _ P o s                                           1 U                                                                                         / * ! <   M P U   R B A R :   A P   P o s i t i o n   * / 
 # d e f i n e   M P U _ R B A R _ A P _ M s k                                         ( 0 x 3 U L   < <   M P U _ R B A R _ A P _ P o s )                                           / * ! <   M P U   R B A R :   A P   M a s k   * / 
 
 # d e f i n e   M P U _ R B A R _ X N _ P o s                                           0 U                                                                                         / * ! <   M P U   R B A R :   X N   P o s i t i o n   * / 
 # d e f i n e   M P U _ R B A R _ X N _ M s k                                         ( 0 1 U L   / * < <   M P U _ R B A R _ X N _ P o s * / )                                     / * ! <   M P U   R B A R :   X N   M a s k   * / 
 
 / *   M P U   R e g i o n   L i m i t   A d d r e s s   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   M P U _ R L A R _ L I M I T _ P o s                                     5 U                                                                                         / * ! <   M P U   R L A R :   L I M I T   P o s i t i o n   * / 
 # d e f i n e   M P U _ R L A R _ L I M I T _ M s k                                   ( 0 x 7 F F F F F F U L   < <   M P U _ R L A R _ L I M I T _ P o s )                         / * ! <   M P U   R L A R :   L I M I T   M a s k   * / 
 
 # d e f i n e   M P U _ R L A R _ A t t r I n d x _ P o s                               1 U                                                                                         / * ! <   M P U   R L A R :   A t t r I n d x   P o s i t i o n   * / 
 # d e f i n e   M P U _ R L A R _ A t t r I n d x _ M s k                             ( 0 x 7 U L   < <   M P U _ R L A R _ A t t r I n d x _ P o s )                               / * ! <   M P U   R L A R :   A t t r I n d x   M a s k   * / 
 
 # d e f i n e   M P U _ R L A R _ E N _ P o s                                           0 U                                                                                         / * ! <   M P U   R L A R :   E N   P o s i t i o n   * / 
 # d e f i n e   M P U _ R L A R _ E N _ M s k                                         ( 1 U L   / * < <   M P U _ R L A R _ E N _ P o s * / )                                       / * ! <   M P U   R L A R :   E N   M a s k   * / 
 
 / *   M P U   M e m o r y   A t t r i b u t e   I n d i r e c t i o n   R e g i s t e r   0   D e f i n i t i o n s   * / 
 # d e f i n e   M P U _ M A I R 0 _ A t t r 3 _ P o s                                 2 4 U                                                                                         / * ! <   M P U   M A I R 0 :   A t t r 3   P o s i t i o n   * / 
 # d e f i n e   M P U _ M A I R 0 _ A t t r 3 _ M s k                                 ( 0 x F F U L   < <   M P U _ M A I R 0 _ A t t r 3 _ P o s )                                 / * ! <   M P U   M A I R 0 :   A t t r 3   M a s k   * / 
 
 # d e f i n e   M P U _ M A I R 0 _ A t t r 2 _ P o s                                 1 6 U                                                                                         / * ! <   M P U   M A I R 0 :   A t t r 2   P o s i t i o n   * / 
 # d e f i n e   M P U _ M A I R 0 _ A t t r 2 _ M s k                                 ( 0 x F F U L   < <   M P U _ M A I R 0 _ A t t r 2 _ P o s )                                 / * ! <   M P U   M A I R 0 :   A t t r 2   M a s k   * / 
 
 # d e f i n e   M P U _ M A I R 0 _ A t t r 1 _ P o s                                   8 U                                                                                         / * ! <   M P U   M A I R 0 :   A t t r 1   P o s i t i o n   * / 
 # d e f i n e   M P U _ M A I R 0 _ A t t r 1 _ M s k                                 ( 0 x F F U L   < <   M P U _ M A I R 0 _ A t t r 1 _ P o s )                                 / * ! <   M P U   M A I R 0 :   A t t r 1   M a s k   * / 
 
 # d e f i n e   M P U _ M A I R 0 _ A t t r 0 _ P o s                                   0 U                                                                                         / * ! <   M P U   M A I R 0 :   A t t r 0   P o s i t i o n   * / 
 # d e f i n e   M P U _ M A I R 0 _ A t t r 0 _ M s k                                 ( 0 x F F U L   / * < <   M P U _ M A I R 0 _ A t t r 0 _ P o s * / )                         / * ! <   M P U   M A I R 0 :   A t t r 0   M a s k   * / 
 
 / *   M P U   M e m o r y   A t t r i b u t e   I n d i r e c t i o n   R e g i s t e r   1   D e f i n i t i o n s   * / 
 # d e f i n e   M P U _ M A I R 1 _ A t t r 7 _ P o s                                 2 4 U                                                                                         / * ! <   M P U   M A I R 1 :   A t t r 7   P o s i t i o n   * / 
 # d e f i n e   M P U _ M A I R 1 _ A t t r 7 _ M s k                                 ( 0 x F F U L   < <   M P U _ M A I R 1 _ A t t r 7 _ P o s )                                 / * ! <   M P U   M A I R 1 :   A t t r 7   M a s k   * / 
 
 # d e f i n e   M P U _ M A I R 1 _ A t t r 6 _ P o s                                 1 6 U                                                                                         / * ! <   M P U   M A I R 1 :   A t t r 6   P o s i t i o n   * / 
 # d e f i n e   M P U _ M A I R 1 _ A t t r 6 _ M s k                                 ( 0 x F F U L   < <   M P U _ M A I R 1 _ A t t r 6 _ P o s )                                 / * ! <   M P U   M A I R 1 :   A t t r 6   M a s k   * / 
 
 # d e f i n e   M P U _ M A I R 1 _ A t t r 5 _ P o s                                   8 U                                                                                         / * ! <   M P U   M A I R 1 :   A t t r 5   P o s i t i o n   * / 
 # d e f i n e   M P U _ M A I R 1 _ A t t r 5 _ M s k                                 ( 0 x F F U L   < <   M P U _ M A I R 1 _ A t t r 5 _ P o s )                                 / * ! <   M P U   M A I R 1 :   A t t r 5   M a s k   * / 
 
 # d e f i n e   M P U _ M A I R 1 _ A t t r 4 _ P o s                                   0 U                                                                                         / * ! <   M P U   M A I R 1 :   A t t r 4   P o s i t i o n   * / 
 # d e f i n e   M P U _ M A I R 1 _ A t t r 4 _ M s k                                 ( 0 x F F U L   / * < <   M P U _ M A I R 1 _ A t t r 4 _ P o s * / )                         / * ! <   M P U   M A I R 1 :   A t t r 4   M a s k   * / 
 
 / * @ }   e n d   o f   g r o u p   C M S I S _ M P U   * / 
 # e n d i f 
 
 
 # i f   d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E )   & &   ( _ _ A R M _ F E A T U R E _ C M S E   = =   3 U ) 
 / * * 
     \ i n g r o u p     C M S I S _ c o r e _ r e g i s t e r 
     \ d e f g r o u p   C M S I S _ S A U           S e c u r i t y   A t t r i b u t i o n   U n i t   ( S A U ) 
     \ b r i e f         T y p e   d e f i n i t i o n s   f o r   t h e   S e c u r i t y   A t t r i b u t i o n   U n i t   ( S A U ) 
     @ { 
   * / 
 
 / * * 
     \ b r i e f     S t r u c t u r e   t y p e   t o   a c c e s s   t h e   S e c u r i t y   A t t r i b u t i o n   U n i t   ( S A U ) . 
   * / 
 t y p e d e f   s t r u c t 
 { 
     _ _ I O M   u i n t 3 2 _ t   C T R L ;                                       / * ! <   O f f s e t :   0 x 0 0 0   ( R / W )     S A U   C o n t r o l   R e g i s t e r   * / 
     _ _ I M     u i n t 3 2 _ t   T Y P E ;                                       / * ! <   O f f s e t :   0 x 0 0 4   ( R /   )     S A U   T y p e   R e g i s t e r   * / 
 # i f   d e f i n e d   ( _ _ S A U R E G I O N _ P R E S E N T )   & &   ( _ _ S A U R E G I O N _ P R E S E N T   = =   1 U ) 
     _ _ I O M   u i n t 3 2 _ t   R N R ;                                         / * ! <   O f f s e t :   0 x 0 0 8   ( R / W )     S A U   R e g i o n   N u m b e r   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   R B A R ;                                       / * ! <   O f f s e t :   0 x 0 0 C   ( R / W )     S A U   R e g i o n   B a s e   A d d r e s s   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   R L A R ;                                       / * ! <   O f f s e t :   0 x 0 1 0   ( R / W )     S A U   R e g i o n   L i m i t   A d d r e s s   R e g i s t e r   * / 
 # e n d i f 
 }   S A U _ T y p e ; 
 
 / *   S A U   C o n t r o l   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   S A U _ C T R L _ A L L N S _ P o s                                     1 U                                                                                         / * ! <   S A U   C T R L :   A L L N S   P o s i t i o n   * / 
 # d e f i n e   S A U _ C T R L _ A L L N S _ M s k                                   ( 1 U L   < <   S A U _ C T R L _ A L L N S _ P o s )                                         / * ! <   S A U   C T R L :   A L L N S   M a s k   * / 
 
 # d e f i n e   S A U _ C T R L _ E N A B L E _ P o s                                   0 U                                                                                         / * ! <   S A U   C T R L :   E N A B L E   P o s i t i o n   * / 
 # d e f i n e   S A U _ C T R L _ E N A B L E _ M s k                                 ( 1 U L   / * < <   S A U _ C T R L _ E N A B L E _ P o s * / )                               / * ! <   S A U   C T R L :   E N A B L E   M a s k   * / 
 
 / *   S A U   T y p e   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   S A U _ T Y P E _ S R E G I O N _ P o s                                 0 U                                                                                         / * ! <   S A U   T Y P E :   S R E G I O N   P o s i t i o n   * / 
 # d e f i n e   S A U _ T Y P E _ S R E G I O N _ M s k                               ( 0 x F F U L   / * < <   S A U _ T Y P E _ S R E G I O N _ P o s * / )                       / * ! <   S A U   T Y P E :   S R E G I O N   M a s k   * / 
 
 # i f   d e f i n e d   ( _ _ S A U R E G I O N _ P R E S E N T )   & &   ( _ _ S A U R E G I O N _ P R E S E N T   = =   1 U ) 
 / *   S A U   R e g i o n   N u m b e r   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   S A U _ R N R _ R E G I O N _ P o s                                     0 U                                                                                         / * ! <   S A U   R N R :   R E G I O N   P o s i t i o n   * / 
 # d e f i n e   S A U _ R N R _ R E G I O N _ M s k                                   ( 0 x F F U L   / * < <   S A U _ R N R _ R E G I O N _ P o s * / )                           / * ! <   S A U   R N R :   R E G I O N   M a s k   * / 
 
 / *   S A U   R e g i o n   B a s e   A d d r e s s   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   S A U _ R B A R _ B A D D R _ P o s                                     5 U                                                                                         / * ! <   S A U   R B A R :   B A D D R   P o s i t i o n   * / 
 # d e f i n e   S A U _ R B A R _ B A D D R _ M s k                                   ( 0 x 7 F F F F F F U L   < <   S A U _ R B A R _ B A D D R _ P o s )                         / * ! <   S A U   R B A R :   B A D D R   M a s k   * / 
 
 / *   S A U   R e g i o n   L i m i t   A d d r e s s   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   S A U _ R L A R _ L A D D R _ P o s                                     5 U                                                                                         / * ! <   S A U   R L A R :   L A D D R   P o s i t i o n   * / 
 # d e f i n e   S A U _ R L A R _ L A D D R _ M s k                                   ( 0 x 7 F F F F F F U L   < <   S A U _ R L A R _ L A D D R _ P o s )                         / * ! <   S A U   R L A R :   L A D D R   M a s k   * / 
 
 # d e f i n e   S A U _ R L A R _ N S C _ P o s                                         1 U                                                                                         / * ! <   S A U   R L A R :   N S C   P o s i t i o n   * / 
 # d e f i n e   S A U _ R L A R _ N S C _ M s k                                       ( 1 U L   < <   S A U _ R L A R _ N S C _ P o s )                                             / * ! <   S A U   R L A R :   N S C   M a s k   * / 
 
 # d e f i n e   S A U _ R L A R _ E N A B L E _ P o s                                   0 U                                                                                         / * ! <   S A U   R L A R :   E N A B L E   P o s i t i o n   * / 
 # d e f i n e   S A U _ R L A R _ E N A B L E _ M s k                                 ( 1 U L   / * < <   S A U _ R L A R _ E N A B L E _ P o s * / )                               / * ! <   S A U   R L A R :   E N A B L E   M a s k   * / 
 
 # e n d i f   / *   d e f i n e d   ( _ _ S A U R E G I O N _ P R E S E N T )   & &   ( _ _ S A U R E G I O N _ P R E S E N T   = =   1 U )   * / 
 
 / * @ }   e n d   o f   g r o u p   C M S I S _ S A U   * / 
 # e n d i f   / *   d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E )   & &   ( _ _ A R M _ F E A T U R E _ C M S E   = =   3 U )   * / 
 
 
 / * * 
     \ i n g r o u p     C M S I S _ c o r e _ r e g i s t e r 
     \ d e f g r o u p   C M S I S _ C o r e D e b u g               C o r e   D e b u g   R e g i s t e r s   ( C o r e D e b u g ) 
     \ b r i e f         T y p e   d e f i n i t i o n s   f o r   t h e   C o r e   D e b u g   R e g i s t e r s 
     @ { 
   * / 
 
 / * * 
     \ b r i e f     S t r u c t u r e   t y p e   t o   a c c e s s   t h e   C o r e   D e b u g   R e g i s t e r   ( C o r e D e b u g ) . 
   * / 
 t y p e d e f   s t r u c t 
 { 
     _ _ I O M   u i n t 3 2 _ t   D H C S R ;                                     / * ! <   O f f s e t :   0 x 0 0 0   ( R / W )     D e b u g   H a l t i n g   C o n t r o l   a n d   S t a t u s   R e g i s t e r   * / 
     _ _ O M     u i n t 3 2 _ t   D C R S R ;                                     / * ! <   O f f s e t :   0 x 0 0 4   (   / W )     D e b u g   C o r e   R e g i s t e r   S e l e c t o r   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   D C R D R ;                                     / * ! <   O f f s e t :   0 x 0 0 8   ( R / W )     D e b u g   C o r e   R e g i s t e r   D a t a   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   D E M C R ;                                     / * ! <   O f f s e t :   0 x 0 0 C   ( R / W )     D e b u g   E x c e p t i o n   a n d   M o n i t o r   C o n t r o l   R e g i s t e r   * / 
                 u i n t 3 2 _ t   R E S E R V E D 4 [ 1 U ] ; 
     _ _ I O M   u i n t 3 2 _ t   D A U T H C T R L ;                             / * ! <   O f f s e t :   0 x 0 1 4   ( R / W )     D e b u g   A u t h e n t i c a t i o n   C o n t r o l   R e g i s t e r   * / 
     _ _ I O M   u i n t 3 2 _ t   D S C S R ;                                     / * ! <   O f f s e t :   0 x 0 1 8   ( R / W )     D e b u g   S e c u r i t y   C o n t r o l   a n d   S t a t u s   R e g i s t e r   * / 
 }   C o r e D e b u g _ T y p e ; 
 
 / *   D e b u g   H a l t i n g   C o n t r o l   a n d   S t a t u s   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   C o r e D e b u g _ D H C S R _ D B G K E Y _ P o s                   1 6 U                                                                                         / * ! <   C o r e D e b u g   D H C S R :   D B G K E Y   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D H C S R _ D B G K E Y _ M s k                   ( 0 x F F F F U L   < <   C o r e D e b u g _ D H C S R _ D B G K E Y _ P o s )               / * ! <   C o r e D e b u g   D H C S R :   D B G K E Y   M a s k   * / 
 
 # d e f i n e   C o r e D e b u g _ D H C S R _ S _ R E S T A R T _ S T _ P o s       2 6 U                                                                                         / * ! <   C o r e D e b u g   D H C S R :   S _ R E S T A R T _ S T   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D H C S R _ S _ R E S T A R T _ S T _ M s k       ( 1 U L   < <   C o r e D e b u g _ D H C S R _ S _ R E S T A R T _ S T _ P o s )             / * ! <   C o r e D e b u g   D H C S R :   S _ R E S T A R T _ S T   M a s k   * / 
 
 # d e f i n e   C o r e D e b u g _ D H C S R _ S _ R E S E T _ S T _ P o s           2 5 U                                                                                         / * ! <   C o r e D e b u g   D H C S R :   S _ R E S E T _ S T   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D H C S R _ S _ R E S E T _ S T _ M s k           ( 1 U L   < <   C o r e D e b u g _ D H C S R _ S _ R E S E T _ S T _ P o s )                 / * ! <   C o r e D e b u g   D H C S R :   S _ R E S E T _ S T   M a s k   * / 
 
 # d e f i n e   C o r e D e b u g _ D H C S R _ S _ R E T I R E _ S T _ P o s         2 4 U                                                                                         / * ! <   C o r e D e b u g   D H C S R :   S _ R E T I R E _ S T   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D H C S R _ S _ R E T I R E _ S T _ M s k         ( 1 U L   < <   C o r e D e b u g _ D H C S R _ S _ R E T I R E _ S T _ P o s )               / * ! <   C o r e D e b u g   D H C S R :   S _ R E T I R E _ S T   M a s k   * / 
 
 # d e f i n e   C o r e D e b u g _ D H C S R _ S _ L O C K U P _ P o s               1 9 U                                                                                         / * ! <   C o r e D e b u g   D H C S R :   S _ L O C K U P   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D H C S R _ S _ L O C K U P _ M s k               ( 1 U L   < <   C o r e D e b u g _ D H C S R _ S _ L O C K U P _ P o s )                     / * ! <   C o r e D e b u g   D H C S R :   S _ L O C K U P   M a s k   * / 
 
 # d e f i n e   C o r e D e b u g _ D H C S R _ S _ S L E E P _ P o s                 1 8 U                                                                                         / * ! <   C o r e D e b u g   D H C S R :   S _ S L E E P   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D H C S R _ S _ S L E E P _ M s k                 ( 1 U L   < <   C o r e D e b u g _ D H C S R _ S _ S L E E P _ P o s )                       / * ! <   C o r e D e b u g   D H C S R :   S _ S L E E P   M a s k   * / 
 
 # d e f i n e   C o r e D e b u g _ D H C S R _ S _ H A L T _ P o s                   1 7 U                                                                                         / * ! <   C o r e D e b u g   D H C S R :   S _ H A L T   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D H C S R _ S _ H A L T _ M s k                   ( 1 U L   < <   C o r e D e b u g _ D H C S R _ S _ H A L T _ P o s )                         / * ! <   C o r e D e b u g   D H C S R :   S _ H A L T   M a s k   * / 
 
 # d e f i n e   C o r e D e b u g _ D H C S R _ S _ R E G R D Y _ P o s               1 6 U                                                                                         / * ! <   C o r e D e b u g   D H C S R :   S _ R E G R D Y   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D H C S R _ S _ R E G R D Y _ M s k               ( 1 U L   < <   C o r e D e b u g _ D H C S R _ S _ R E G R D Y _ P o s )                     / * ! <   C o r e D e b u g   D H C S R :   S _ R E G R D Y   M a s k   * / 
 
 # d e f i n e   C o r e D e b u g _ D H C S R _ C _ M A S K I N T S _ P o s             3 U                                                                                         / * ! <   C o r e D e b u g   D H C S R :   C _ M A S K I N T S   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D H C S R _ C _ M A S K I N T S _ M s k           ( 1 U L   < <   C o r e D e b u g _ D H C S R _ C _ M A S K I N T S _ P o s )                 / * ! <   C o r e D e b u g   D H C S R :   C _ M A S K I N T S   M a s k   * / 
 
 # d e f i n e   C o r e D e b u g _ D H C S R _ C _ S T E P _ P o s                     2 U                                                                                         / * ! <   C o r e D e b u g   D H C S R :   C _ S T E P   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D H C S R _ C _ S T E P _ M s k                   ( 1 U L   < <   C o r e D e b u g _ D H C S R _ C _ S T E P _ P o s )                         / * ! <   C o r e D e b u g   D H C S R :   C _ S T E P   M a s k   * / 
 
 # d e f i n e   C o r e D e b u g _ D H C S R _ C _ H A L T _ P o s                     1 U                                                                                         / * ! <   C o r e D e b u g   D H C S R :   C _ H A L T   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D H C S R _ C _ H A L T _ M s k                   ( 1 U L   < <   C o r e D e b u g _ D H C S R _ C _ H A L T _ P o s )                         / * ! <   C o r e D e b u g   D H C S R :   C _ H A L T   M a s k   * / 
 
 # d e f i n e   C o r e D e b u g _ D H C S R _ C _ D E B U G E N _ P o s               0 U                                                                                         / * ! <   C o r e D e b u g   D H C S R :   C _ D E B U G E N   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D H C S R _ C _ D E B U G E N _ M s k             ( 1 U L   / * < <   C o r e D e b u g _ D H C S R _ C _ D E B U G E N _ P o s * / )           / * ! <   C o r e D e b u g   D H C S R :   C _ D E B U G E N   M a s k   * / 
 
 / *   D e b u g   C o r e   R e g i s t e r   S e l e c t o r   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   C o r e D e b u g _ D C R S R _ R E G W n R _ P o s                   1 6 U                                                                                         / * ! <   C o r e D e b u g   D C R S R :   R E G W n R   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D C R S R _ R E G W n R _ M s k                   ( 1 U L   < <   C o r e D e b u g _ D C R S R _ R E G W n R _ P o s )                         / * ! <   C o r e D e b u g   D C R S R :   R E G W n R   M a s k   * / 
 
 # d e f i n e   C o r e D e b u g _ D C R S R _ R E G S E L _ P o s                     0 U                                                                                         / * ! <   C o r e D e b u g   D C R S R :   R E G S E L   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D C R S R _ R E G S E L _ M s k                   ( 0 x 1 F U L   / * < <   C o r e D e b u g _ D C R S R _ R E G S E L _ P o s * / )           / * ! <   C o r e D e b u g   D C R S R :   R E G S E L   M a s k   * / 
 
 / *   D e b u g   E x c e p t i o n   a n d   M o n i t o r   C o n t r o l   R e g i s t e r   * / 
 # d e f i n e   C o r e D e b u g _ D E M C R _ D W T E N A _ P o s                   2 4 U                                                                                         / * ! <   C o r e D e b u g   D E M C R :   D W T E N A   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D E M C R _ D W T E N A _ M s k                   ( 1 U L   < <   C o r e D e b u g _ D E M C R _ D W T E N A _ P o s )                         / * ! <   C o r e D e b u g   D E M C R :   D W T E N A   M a s k   * / 
 
 # d e f i n e   C o r e D e b u g _ D E M C R _ V C _ H A R D E R R _ P o s           1 0 U                                                                                         / * ! <   C o r e D e b u g   D E M C R :   V C _ H A R D E R R   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D E M C R _ V C _ H A R D E R R _ M s k           ( 1 U L   < <   C o r e D e b u g _ D E M C R _ V C _ H A R D E R R _ P o s )                 / * ! <   C o r e D e b u g   D E M C R :   V C _ H A R D E R R   M a s k   * / 
 
 # d e f i n e   C o r e D e b u g _ D E M C R _ V C _ C O R E R E S E T _ P o s         0 U                                                                                         / * ! <   C o r e D e b u g   D E M C R :   V C _ C O R E R E S E T   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D E M C R _ V C _ C O R E R E S E T _ M s k       ( 1 U L   / * < <   C o r e D e b u g _ D E M C R _ V C _ C O R E R E S E T _ P o s * / )     / * ! <   C o r e D e b u g   D E M C R :   V C _ C O R E R E S E T   M a s k   * / 
 
 / *   D e b u g   A u t h e n t i c a t i o n   C o n t r o l   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   C o r e D e b u g _ D A U T H C T R L _ I N T S P N I D E N _ P o s     3 U                                                                                         / * ! <   C o r e D e b u g   D A U T H C T R L :   I N T S P N I D E N ,   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D A U T H C T R L _ I N T S P N I D E N _ M s k   ( 1 U L   < <   C o r e D e b u g _ D A U T H C T R L _ I N T S P N I D E N _ P o s )         / * ! <   C o r e D e b u g   D A U T H C T R L :   I N T S P N I D E N ,   M a s k   * / 
 
 # d e f i n e   C o r e D e b u g _ D A U T H C T R L _ S P N I D E N S E L _ P o s     2 U                                                                                         / * ! <   C o r e D e b u g   D A U T H C T R L :   S P N I D E N S E L   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D A U T H C T R L _ S P N I D E N S E L _ M s k   ( 1 U L   < <   C o r e D e b u g _ D A U T H C T R L _ S P N I D E N S E L _ P o s )         / * ! <   C o r e D e b u g   D A U T H C T R L :   S P N I D E N S E L   M a s k   * / 
 
 # d e f i n e   C o r e D e b u g _ D A U T H C T R L _ I N T S P I D E N _ P o s       1 U                                                                                         / * ! <   C o r e D e b u g   D A U T H C T R L :   I N T S P I D E N   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D A U T H C T R L _ I N T S P I D E N _ M s k     ( 1 U L   < <   C o r e D e b u g _ D A U T H C T R L _ I N T S P I D E N _ P o s )           / * ! <   C o r e D e b u g   D A U T H C T R L :   I N T S P I D E N   M a s k   * / 
 
 # d e f i n e   C o r e D e b u g _ D A U T H C T R L _ S P I D E N S E L _ P o s       0 U                                                                                         / * ! <   C o r e D e b u g   D A U T H C T R L :   S P I D E N S E L   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D A U T H C T R L _ S P I D E N S E L _ M s k     ( 1 U L   / * < <   C o r e D e b u g _ D A U T H C T R L _ S P I D E N S E L _ P o s * / )   / * ! <   C o r e D e b u g   D A U T H C T R L :   S P I D E N S E L   M a s k   * / 
 
 / *   D e b u g   S e c u r i t y   C o n t r o l   a n d   S t a t u s   R e g i s t e r   D e f i n i t i o n s   * / 
 # d e f i n e   C o r e D e b u g _ D S C S R _ C D S _ P o s                         1 6 U                                                                                         / * ! <   C o r e D e b u g   D S C S R :   C D S   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D S C S R _ C D S _ M s k                         ( 1 U L   < <   C o r e D e b u g _ D S C S R _ C D S _ P o s )                               / * ! <   C o r e D e b u g   D S C S R :   C D S   M a s k   * / 
 
 # d e f i n e   C o r e D e b u g _ D S C S R _ S B R S E L _ P o s                     1 U                                                                                         / * ! <   C o r e D e b u g   D S C S R :   S B R S E L   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D S C S R _ S B R S E L _ M s k                   ( 1 U L   < <   C o r e D e b u g _ D S C S R _ S B R S E L _ P o s )                         / * ! <   C o r e D e b u g   D S C S R :   S B R S E L   M a s k   * / 
 
 # d e f i n e   C o r e D e b u g _ D S C S R _ S B R S E L E N _ P o s                 0 U                                                                                         / * ! <   C o r e D e b u g   D S C S R :   S B R S E L E N   P o s i t i o n   * / 
 # d e f i n e   C o r e D e b u g _ D S C S R _ S B R S E L E N _ M s k               ( 1 U L   / * < <   C o r e D e b u g _ D S C S R _ S B R S E L E N _ P o s * / )             / * ! <   C o r e D e b u g   D S C S R :   S B R S E L E N   M a s k   * / 
 
 / * @ }   e n d   o f   g r o u p   C M S I S _ C o r e D e b u g   * / 
 
 
 / * * 
     \ i n g r o u p         C M S I S _ c o r e _ r e g i s t e r 
     \ d e f g r o u p       C M S I S _ c o r e _ b i t f i e l d           C o r e   r e g i s t e r   b i t   f i e l d   m a c r o s 
     \ b r i e f             M a c r o s   f o r   u s e   w i t h   b i t   f i e l d   d e f i n i t i o n s   ( x x x _ P o s ,   x x x _ M s k ) . 
     @ { 
   * / 
 
 / * * 
     \ b r i e f       M a s k   a n d   s h i f t   a   b i t   f i e l d   v a l u e   f o r   u s e   i n   a   r e g i s t e r   b i t   r a n g e . 
     \ p a r a m [ i n ]   f i e l d     N a m e   o f   t h e   r e g i s t e r   b i t   f i e l d . 
     \ p a r a m [ i n ]   v a l u e     V a l u e   o f   t h e   b i t   f i e l d .   T h i s   p a r a m e t e r   i s   i n t e r p r e t e d   a s   a n   u i n t 3 2 _ t   t y p e . 
     \ r e t u r n                       M a s k e d   a n d   s h i f t e d   v a l u e . 
 * / 
 # d e f i n e   _ V A L 2 F L D ( f i e l d ,   v a l u e )         ( ( ( u i n t 3 2 _ t ) ( v a l u e )   < <   f i e l d   # #   _ P o s )   &   f i e l d   # #   _ M s k ) 
 
 / * * 
     \ b r i e f           M a s k   a n d   s h i f t   a   r e g i s t e r   v a l u e   t o   e x t r a c t   a   b i t   f i l e d   v a l u e . 
     \ p a r a m [ i n ]   f i e l d     N a m e   o f   t h e   r e g i s t e r   b i t   f i e l d . 
     \ p a r a m [ i n ]   v a l u e     V a l u e   o f   r e g i s t e r .   T h i s   p a r a m e t e r   i s   i n t e r p r e t e d   a s   a n   u i n t 3 2 _ t   t y p e . 
     \ r e t u r n                       M a s k e d   a n d   s h i f t e d   b i t   f i e l d   v a l u e . 
 * / 
 # d e f i n e   _ F L D 2 V A L ( f i e l d ,   v a l u e )         ( ( ( u i n t 3 2 _ t ) ( v a l u e )   &   f i e l d   # #   _ M s k )   > >   f i e l d   # #   _ P o s ) 
 
 / * @ }   e n d   o f   g r o u p   C M S I S _ c o r e _ b i t f i e l d   * / 
 
 
 / * * 
     \ i n g r o u p         C M S I S _ c o r e _ r e g i s t e r 
     \ d e f g r o u p       C M S I S _ c o r e _ b a s e           C o r e   D e f i n i t i o n s 
     \ b r i e f             D e f i n i t i o n s   f o r   b a s e   a d d r e s s e s ,   u n i o n s ,   a n d   s t r u c t u r e s . 
     @ { 
   * / 
 
 / *   M e m o r y   m a p p i n g   o f   C o r e   H a r d w a r e   * / 
     # d e f i n e   S C S _ B A S E                         ( 0 x E 0 0 0 E 0 0 0 U L )                                                           / * ! <   S y s t e m   C o n t r o l   S p a c e   B a s e   A d d r e s s   * / 
     # d e f i n e   D W T _ B A S E                         ( 0 x E 0 0 0 1 0 0 0 U L )                                                           / * ! <   D W T   B a s e   A d d r e s s   * / 
     # d e f i n e   T P I _ B A S E                         ( 0 x E 0 0 4 0 0 0 0 U L )                                                           / * ! <   T P I   B a s e   A d d r e s s   * / 
     # d e f i n e   C o r e D e b u g _ B A S E             ( 0 x E 0 0 0 E D F 0 U L )                                                           / * ! <   C o r e   D e b u g   B a s e   A d d r e s s   * / 
     # d e f i n e   S y s T i c k _ B A S E                 ( S C S _ B A S E   +     0 x 0 0 1 0 U L )                                           / * ! <   S y s T i c k   B a s e   A d d r e s s   * / 
     # d e f i n e   N V I C _ B A S E                       ( S C S _ B A S E   +     0 x 0 1 0 0 U L )                                           / * ! <   N V I C   B a s e   A d d r e s s   * / 
     # d e f i n e   S C B _ B A S E                         ( S C S _ B A S E   +     0 x 0 D 0 0 U L )                                           / * ! <   S y s t e m   C o n t r o l   B l o c k   B a s e   A d d r e s s   * / 
 
 
     # d e f i n e   S C B                                   ( ( S C B _ T y p e               * )           S C B _ B A S E                   )   / * ! <   S C B   c o n f i g u r a t i o n   s t r u c t   * / 
     # d e f i n e   S y s T i c k                           ( ( S y s T i c k _ T y p e       * )           S y s T i c k _ B A S E           )   / * ! <   S y s T i c k   c o n f i g u r a t i o n   s t r u c t   * / 
     # d e f i n e   N V I C                                 ( ( N V I C _ T y p e             * )           N V I C _ B A S E                 )   / * ! <   N V I C   c o n f i g u r a t i o n   s t r u c t   * / 
     # d e f i n e   D W T                                   ( ( D W T _ T y p e               * )           D W T _ B A S E                   )   / * ! <   D W T   c o n f i g u r a t i o n   s t r u c t   * / 
     # d e f i n e   T P I                                   ( ( T P I _ T y p e               * )           T P I _ B A S E                   )   / * ! <   T P I   c o n f i g u r a t i o n   s t r u c t   * / 
     # d e f i n e   C o r e D e b u g                       ( ( C o r e D e b u g _ T y p e   * )           C o r e D e b u g _ B A S E       )   / * ! <   C o r e   D e b u g   c o n f i g u r a t i o n   s t r u c t   * / 
 
     # i f   d e f i n e d   ( _ _ M P U _ P R E S E N T )   & &   ( _ _ M P U _ P R E S E N T   = =   1 U ) 
         # d e f i n e   M P U _ B A S E                     ( S C S _ B A S E   +     0 x 0 D 9 0 U L )                                           / * ! <   M e m o r y   P r o t e c t i o n   U n i t   * / 
         # d e f i n e   M P U                               ( ( M P U _ T y p e               * )           M P U _ B A S E                   )   / * ! <   M e m o r y   P r o t e c t i o n   U n i t   * / 
     # e n d i f 
 
     # i f   d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E )   & &   ( _ _ A R M _ F E A T U R E _ C M S E   = =   3 U ) 
         # d e f i n e   S A U _ B A S E                     ( S C S _ B A S E   +     0 x 0 D D 0 U L )                                           / * ! <   S e c u r i t y   A t t r i b u t i o n   U n i t   * / 
         # d e f i n e   S A U                               ( ( S A U _ T y p e               * )           S A U _ B A S E                   )   / * ! <   S e c u r i t y   A t t r i b u t i o n   U n i t   * / 
     # e n d i f 
 
 # i f   d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E )   & &   ( _ _ A R M _ F E A T U R E _ C M S E   = =   3 U ) 
     # d e f i n e   S C S _ B A S E _ N S                   ( 0 x E 0 0 2 E 0 0 0 U L )                                                           / * ! <   S y s t e m   C o n t r o l   S p a c e   B a s e   A d d r e s s   ( n o n - s e c u r e   a d d r e s s   s p a c e )   * / 
     # d e f i n e   C o r e D e b u g _ B A S E _ N S       ( 0 x E 0 0 2 E D F 0 U L )                                                           / * ! <   C o r e   D e b u g   B a s e   A d d r e s s                       ( n o n - s e c u r e   a d d r e s s   s p a c e )   * / 
     # d e f i n e   S y s T i c k _ B A S E _ N S           ( S C S _ B A S E _ N S   +     0 x 0 0 1 0 U L )                                     / * ! <   S y s T i c k   B a s e   A d d r e s s                             ( n o n - s e c u r e   a d d r e s s   s p a c e )   * / 
     # d e f i n e   N V I C _ B A S E _ N S                 ( S C S _ B A S E _ N S   +     0 x 0 1 0 0 U L )                                     / * ! <   N V I C   B a s e   A d d r e s s                                   ( n o n - s e c u r e   a d d r e s s   s p a c e )   * / 
     # d e f i n e   S C B _ B A S E _ N S                   ( S C S _ B A S E _ N S   +     0 x 0 D 0 0 U L )                                     / * ! <   S y s t e m   C o n t r o l   B l o c k   B a s e   A d d r e s s   ( n o n - s e c u r e   a d d r e s s   s p a c e )   * / 
 
     # d e f i n e   S C B _ N S                             ( ( S C B _ T y p e               * )           S C B _ B A S E _ N S             )   / * ! <   S C B   c o n f i g u r a t i o n   s t r u c t                     ( n o n - s e c u r e   a d d r e s s   s p a c e )   * / 
     # d e f i n e   S y s T i c k _ N S                     ( ( S y s T i c k _ T y p e       * )           S y s T i c k _ B A S E _ N S     )   / * ! <   S y s T i c k   c o n f i g u r a t i o n   s t r u c t             ( n o n - s e c u r e   a d d r e s s   s p a c e )   * / 
     # d e f i n e   N V I C _ N S                           ( ( N V I C _ T y p e             * )           N V I C _ B A S E _ N S           )   / * ! <   N V I C   c o n f i g u r a t i o n   s t r u c t                   ( n o n - s e c u r e   a d d r e s s   s p a c e )   * / 
     # d e f i n e   C o r e D e b u g _ N S                 ( ( C o r e D e b u g _ T y p e   * )           C o r e D e b u g _ B A S E _ N S )   / * ! <   C o r e   D e b u g   c o n f i g u r a t i o n   s t r u c t       ( n o n - s e c u r e   a d d r e s s   s p a c e )   * / 
 
     # i f   d e f i n e d   ( _ _ M P U _ P R E S E N T )   & &   ( _ _ M P U _ P R E S E N T   = =   1 U ) 
         # d e f i n e   M P U _ B A S E _ N S               ( S C S _ B A S E _ N S   +     0 x 0 D 9 0 U L )                                     / * ! <   M e m o r y   P r o t e c t i o n   U n i t                         ( n o n - s e c u r e   a d d r e s s   s p a c e )   * / 
         # d e f i n e   M P U _ N S                         ( ( M P U _ T y p e               * )           M P U _ B A S E _ N S             )   / * ! <   M e m o r y   P r o t e c t i o n   U n i t                         ( n o n - s e c u r e   a d d r e s s   s p a c e )   * / 
     # e n d i f 
 
 # e n d i f   / *   d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E )   & &   ( _ _ A R M _ F E A T U R E _ C M S E   = =   3 U )   * / 
 / * @ }   * / 
 
 
 
 / * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
   *                                 H a r d w a r e   A b s t r a c t i o n   L a y e r 
     C o r e   F u n c t i o n   I n t e r f a c e   c o n t a i n s : 
     -   C o r e   N V I C   F u n c t i o n s 
     -   C o r e   S y s T i c k   F u n c t i o n s 
     -   C o r e   R e g i s t e r   A c c e s s   F u n c t i o n s 
   * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * / 
 / * * 
     \ d e f g r o u p   C M S I S _ C o r e _ F u n c t i o n I n t e r f a c e   F u n c t i o n s   a n d   I n s t r u c t i o n s   R e f e r e n c e 
 * / 
 
 
 
 / *   # # # # # # # # # # # # # # # # # # # # # # # # # #       N V I C   f u n c t i o n s     # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #   * / 
 / * * 
     \ i n g r o u p     C M S I S _ C o r e _ F u n c t i o n I n t e r f a c e 
     \ d e f g r o u p   C M S I S _ C o r e _ N V I C F u n c t i o n s   N V I C   F u n c t i o n s 
     \ b r i e f         F u n c t i o n s   t h a t   m a n a g e   i n t e r r u p t s   a n d   e x c e p t i o n s   v i a   t h e   N V I C . 
     @ { 
   * / 
 
 # i f d e f   C M S I S _ N V I C _ V I R T U A L 
     # i f n d e f   C M S I S _ N V I C _ V I R T U A L _ H E A D E R _ F I L E 
         # d e f i n e   C M S I S _ N V I C _ V I R T U A L _ H E A D E R _ F I L E   " c m s i s _ n v i c _ v i r t u a l . h " 
     # e n d i f 
     # i n c l u d e   C M S I S _ N V I C _ V I R T U A L _ H E A D E R _ F I L E 
 # e l s e 
 / * # d e f i n e   N V I C _ S e t P r i o r i t y G r o u p i n g         _ _ N V I C _ S e t P r i o r i t y G r o u p i n g       n o t   a v a i l a b l e   f o r   C o r t e x - M 2 3   * / 
 / * # d e f i n e   N V I C _ G e t P r i o r i t y G r o u p i n g         _ _ N V I C _ G e t P r i o r i t y G r o u p i n g       n o t   a v a i l a b l e   f o r   C o r t e x - M 2 3   * / 
     # d e f i n e   N V I C _ E n a b l e I R Q                             _ _ N V I C _ E n a b l e I R Q 
     # d e f i n e   N V I C _ G e t E n a b l e I R Q                       _ _ N V I C _ G e t E n a b l e I R Q 
     # d e f i n e   N V I C _ D i s a b l e I R Q                           _ _ N V I C _ D i s a b l e I R Q 
     # d e f i n e   N V I C _ G e t P e n d i n g I R Q                     _ _ N V I C _ G e t P e n d i n g I R Q 
     # d e f i n e   N V I C _ S e t P e n d i n g I R Q                     _ _ N V I C _ S e t P e n d i n g I R Q 
     # d e f i n e   N V I C _ C l e a r P e n d i n g I R Q                 _ _ N V I C _ C l e a r P e n d i n g I R Q 
     # d e f i n e   N V I C _ G e t A c t i v e                             _ _ N V I C _ G e t A c t i v e 
     # d e f i n e   N V I C _ S e t P r i o r i t y                         _ _ N V I C _ S e t P r i o r i t y 
     # d e f i n e   N V I C _ G e t P r i o r i t y                         _ _ N V I C _ G e t P r i o r i t y 
     # d e f i n e   N V I C _ S y s t e m R e s e t                         _ _ N V I C _ S y s t e m R e s e t 
 # e n d i f   / *   C M S I S _ N V I C _ V I R T U A L   * / 
 
 # i f d e f   C M S I S _ V E C T A B _ V I R T U A L 
     # i f n d e f   C M S I S _ V E C T A B _ V I R T U A L _ H E A D E R _ F I L E 
         # d e f i n e   C M S I S _ V E C T A B _ V I R T U A L _ H E A D E R _ F I L E   " c m s i s _ v e c t a b _ v i r t u a l . h " 
     # e n d i f 
     # i n c l u d e   C M S I S _ V E C T A B _ V I R T U A L _ H E A D E R _ F I L E 
 # e l s e 
     # d e f i n e   N V I C _ S e t V e c t o r                             _ _ N V I C _ S e t V e c t o r 
     # d e f i n e   N V I C _ G e t V e c t o r                             _ _ N V I C _ G e t V e c t o r 
 # e n d i f     / *   ( C M S I S _ V E C T A B _ V I R T U A L )   * / 
 
 # d e f i n e   N V I C _ U S E R _ I R Q _ O F F S E T                     1 6 
 
 
 / *   S p e c i a l   L R   v a l u e s   f o r   S e c u r e / N o n - S e c u r e   c a l l   h a n d l i n g   a n d   e x c e p t i o n   h a n d l i n g                                                                                               * / 
 
 / *   F u n c t i o n   R e t u r n   P a y l o a d   ( f r o m   A R M v 8 - M   A r c h i t e c t u r e   R e f e r e n c e   M a n u a l )   L R   v a l u e   o n   e n t r y   f r o m   S e c u r e   B L X N S                                       * /   
 # d e f i n e   F N C _ R E T U R N                                   ( 0 x F E F F F F F F U L )           / *   b i t   [ 0 ]   i g n o r e d   w h e n   p r o c e s s i n g   a   b r a n c h                                                           * / 
 
 / *   T h e   f o l l o w i n g   E X C _ R E T U R N   m a s k   v a l u e s   a r e   u s e d   t o   e v a l u a t e   t h e   L R   o n   e x c e p t i o n   e n t r y   * / 
 # d e f i n e   E X C _ R E T U R N _ P R E F I X                     ( 0 x F F 0 0 0 0 0 0 U L )           / *   b i t s   [ 3 1 : 2 4 ]   s e t   t o   i n d i c a t e   a n   E X C _ R E T U R N   v a l u e                                           * / 
 # d e f i n e   E X C _ R E T U R N _ S                               ( 0 x 0 0 0 0 0 0 4 0 U L )           / *   b i t   [ 6 ]   s t a c k   u s e d   t o   p u s h   r e g i s t e r s :   0 = N o n - s e c u r e   1 = S e c u r e                     * / 
 # d e f i n e   E X C _ R E T U R N _ D C R S                         ( 0 x 0 0 0 0 0 0 2 0 U L )           / *   b i t   [ 5 ]   s t a c k i n g   r u l e s   f o r   c a l l e d   r e g i s t e r s :   0 = s k i p p e d   1 = s a v e d               * / 
 # d e f i n e   E X C _ R E T U R N _ F T Y P E                       ( 0 x 0 0 0 0 0 0 1 0 U L )           / *   b i t   [ 4 ]   a l l o c a t e   s t a c k   f o r   f l o a t i n g - p o i n t   c o n t e x t :   0 = d o n e   1 = s k i p p e d     * / 
 # d e f i n e   E X C _ R E T U R N _ M O D E                         ( 0 x 0 0 0 0 0 0 0 8 U L )           / *   b i t   [ 3 ]   p r o c e s s o r   m o d e   f o r   r e t u r n :   0 = H a n d l e r   m o d e   1 = T h r e a d   m o d e             * / 
 # d e f i n e   E X C _ R E T U R N _ S P S E L                       ( 0 x 0 0 0 0 0 0 0 2 U L )           / *   b i t   [ 1 ]   s t a c k   p o i n t e r   u s e d   t o   r e s t o r e   c o n t e x t :   0 = M S P   1 = P S P                       * / 
 # d e f i n e   E X C _ R E T U R N _ E S                             ( 0 x 0 0 0 0 0 0 0 1 U L )           / *   b i t   [ 0 ]   s e c u r i t y   s t a t e   e x c e p t i o n   w a s   t a k e n   t o :   0 = N o n - s e c u r e   1 = S e c u r e   * / 
 
 / *   I n t e g r i t y   S i g n a t u r e   ( f r o m   A R M v 8 - M   A r c h i t e c t u r e   R e f e r e n c e   M a n u a l )   f o r   e x c e p t i o n   c o n t e x t   s t a c k i n g                                                         * / 
 # i f   d e f i n e d   ( _ _ F P U _ P R E S E N T )   & &   ( _ _ F P U _ P R E S E N T   = =   1 U )     / *   V a l u e   f o r   p r o c e s s o r s   w i t h   f l o a t i n g - p o i n t   e x t e n s i o n :                                     * / 
 # d e f i n e   E X C _ I N T E G R I T Y _ S I G N A T U R E           ( 0 x F E F A 1 2 5 A U L )           / *   b i t   [ 0 ]   S F T C   m u s t   m a t c h   L R   b i t [ 4 ]   E X C _ R E T U R N _ F T Y P E                                       * / 
 # e l s e   
 # d e f i n e   E X C _ I N T E G R I T Y _ S I G N A T U R E           ( 0 x F E F A 1 2 5 B U L )           / *   V a l u e   f o r   p r o c e s s o r s   w i t h o u t   f l o a t i n g - p o i n t   e x t e n s i o n                                 * / 
 # e n d i f 
 
 	 
 / *   I n t e r r u p t   P r i o r i t i e s   a r e   W O R D   a c c e s s i b l e   o n l y   u n d e r   A r m v 6 - M                                     * / 
 / *   T h e   f o l l o w i n g   M A C R O S   h a n d l e   g e n e r a t i o n   o f   t h e   r e g i s t e r   o f f s e t   a n d   b y t e   m a s k s   * / 
 # d e f i n e   _ B I T _ S H I F T ( I R Q n )                   (     ( ( ( ( u i n t 3 2 _ t ) ( i n t 3 2 _ t ) ( I R Q n ) )                   )             &     0 x 0 3 U L )   *   8 U L ) 
 # d e f i n e   _ S H P _ I D X ( I R Q n )                       (   ( ( ( ( ( u i n t 3 2 _ t ) ( i n t 3 2 _ t ) ( I R Q n ) )   &   0 x 0 F U L ) - 8 U L )   > >         2 U L )             ) 
 # d e f i n e   _ I P _ I D X ( I R Q n )                         (       ( ( ( u i n t 3 2 _ t ) ( i n t 3 2 _ t ) ( I R Q n ) )                                 > >         2 U L )             ) 
 
 # d e f i n e   _ _ N V I C _ S e t P r i o r i t y G r o u p i n g ( X )   ( v o i d ) ( X ) 
 # d e f i n e   _ _ N V I C _ G e t P r i o r i t y G r o u p i n g ( )     ( 0 U ) 
 
 / * * 
     \ b r i e f       E n a b l e   I n t e r r u p t 
     \ d e t a i l s   E n a b l e s   a   d e v i c e   s p e c i f i c   i n t e r r u p t   i n   t h e   N V I C   i n t e r r u p t   c o n t r o l l e r . 
     \ p a r a m   [ i n ]             I R Q n     D e v i c e   s p e c i f i c   i n t e r r u p t   n u m b e r . 
     \ n o t e         I R Q n   m u s t   n o t   b e   n e g a t i v e . 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   _ _ N V I C _ E n a b l e I R Q ( I R Q n _ T y p e   I R Q n ) 
 { 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         N V I C - > I S E R [ ( ( ( u i n t 3 2 _ t ) I R Q n )   > >   5 U L ) ]   =   ( u i n t 3 2 _ t ) ( 1 U L   < <   ( ( ( u i n t 3 2 _ t ) I R Q n )   &   0 x 1 F U L ) ) ; 
     } 
 } 
 
 
 / * * 
     \ b r i e f       G e t   I n t e r r u p t   E n a b l e   s t a t u s 
     \ d e t a i l s   R e t u r n s   a   d e v i c e   s p e c i f i c   i n t e r r u p t   e n a b l e   s t a t u s   f r o m   t h e   N V I C   i n t e r r u p t   c o n t r o l l e r . 
     \ p a r a m   [ i n ]             I R Q n     D e v i c e   s p e c i f i c   i n t e r r u p t   n u m b e r . 
     \ r e t u r n                           0     I n t e r r u p t   i s   n o t   e n a b l e d . 
     \ r e t u r n                           1     I n t e r r u p t   i s   e n a b l e d . 
     \ n o t e         I R Q n   m u s t   n o t   b e   n e g a t i v e . 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ N V I C _ G e t E n a b l e I R Q ( I R Q n _ T y p e   I R Q n ) 
 { 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         r e t u r n ( ( u i n t 3 2 _ t ) ( ( ( N V I C - > I S E R [ ( ( ( u i n t 3 2 _ t ) I R Q n )   > >   5 U L ) ]   &   ( 1 U L   < <   ( ( ( u i n t 3 2 _ t ) I R Q n )   &   0 x 1 F U L ) ) )   ! =   0 U L )   ?   1 U L   :   0 U L ) ) ; 
     } 
     e l s e 
     { 
         r e t u r n ( 0 U ) ; 
     } 
 } 
 
 
 / * * 
     \ b r i e f       D i s a b l e   I n t e r r u p t 
     \ d e t a i l s   D i s a b l e s   a   d e v i c e   s p e c i f i c   i n t e r r u p t   i n   t h e   N V I C   i n t e r r u p t   c o n t r o l l e r . 
     \ p a r a m   [ i n ]             I R Q n     D e v i c e   s p e c i f i c   i n t e r r u p t   n u m b e r . 
     \ n o t e         I R Q n   m u s t   n o t   b e   n e g a t i v e . 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   _ _ N V I C _ D i s a b l e I R Q ( I R Q n _ T y p e   I R Q n ) 
 { 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         N V I C - > I C E R [ ( ( ( u i n t 3 2 _ t ) I R Q n )   > >   5 U L ) ]   =   ( u i n t 3 2 _ t ) ( 1 U L   < <   ( ( ( u i n t 3 2 _ t ) I R Q n )   &   0 x 1 F U L ) ) ; 
         _ _ D S B ( ) ; 
         _ _ I S B ( ) ; 
     } 
 } 
 
 
 / * * 
     \ b r i e f       G e t   P e n d i n g   I n t e r r u p t 
     \ d e t a i l s   R e a d s   t h e   N V I C   p e n d i n g   r e g i s t e r   a n d   r e t u r n s   t h e   p e n d i n g   b i t   f o r   t h e   s p e c i f i e d   d e v i c e   s p e c i f i c   i n t e r r u p t . 
     \ p a r a m   [ i n ]             I R Q n     D e v i c e   s p e c i f i c   i n t e r r u p t   n u m b e r . 
     \ r e t u r n                           0     I n t e r r u p t   s t a t u s   i s   n o t   p e n d i n g . 
     \ r e t u r n                           1     I n t e r r u p t   s t a t u s   i s   p e n d i n g . 
     \ n o t e         I R Q n   m u s t   n o t   b e   n e g a t i v e . 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ N V I C _ G e t P e n d i n g I R Q ( I R Q n _ T y p e   I R Q n ) 
 { 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         r e t u r n ( ( u i n t 3 2 _ t ) ( ( ( N V I C - > I S P R [ ( ( ( u i n t 3 2 _ t ) I R Q n )   > >   5 U L ) ]   &   ( 1 U L   < <   ( ( ( u i n t 3 2 _ t ) I R Q n )   &   0 x 1 F U L ) ) )   ! =   0 U L )   ?   1 U L   :   0 U L ) ) ; 
     } 
     e l s e 
     { 
         r e t u r n ( 0 U ) ; 
     } 
 } 
 
 
 / * * 
     \ b r i e f       S e t   P e n d i n g   I n t e r r u p t 
     \ d e t a i l s   S e t s   t h e   p e n d i n g   b i t   o f   a   d e v i c e   s p e c i f i c   i n t e r r u p t   i n   t h e   N V I C   p e n d i n g   r e g i s t e r . 
     \ p a r a m   [ i n ]             I R Q n     D e v i c e   s p e c i f i c   i n t e r r u p t   n u m b e r . 
     \ n o t e         I R Q n   m u s t   n o t   b e   n e g a t i v e . 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   _ _ N V I C _ S e t P e n d i n g I R Q ( I R Q n _ T y p e   I R Q n ) 
 { 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         N V I C - > I S P R [ ( ( ( u i n t 3 2 _ t ) I R Q n )   > >   5 U L ) ]   =   ( u i n t 3 2 _ t ) ( 1 U L   < <   ( ( ( u i n t 3 2 _ t ) I R Q n )   &   0 x 1 F U L ) ) ; 
     } 
 } 
 
 
 / * * 
     \ b r i e f       C l e a r   P e n d i n g   I n t e r r u p t 
     \ d e t a i l s   C l e a r s   t h e   p e n d i n g   b i t   o f   a   d e v i c e   s p e c i f i c   i n t e r r u p t   i n   t h e   N V I C   p e n d i n g   r e g i s t e r . 
     \ p a r a m   [ i n ]             I R Q n     D e v i c e   s p e c i f i c   i n t e r r u p t   n u m b e r . 
     \ n o t e         I R Q n   m u s t   n o t   b e   n e g a t i v e . 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   _ _ N V I C _ C l e a r P e n d i n g I R Q ( I R Q n _ T y p e   I R Q n ) 
 { 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         N V I C - > I C P R [ ( ( ( u i n t 3 2 _ t ) I R Q n )   > >   5 U L ) ]   =   ( u i n t 3 2 _ t ) ( 1 U L   < <   ( ( ( u i n t 3 2 _ t ) I R Q n )   &   0 x 1 F U L ) ) ; 
     } 
 } 
 
 
 / * * 
     \ b r i e f       G e t   A c t i v e   I n t e r r u p t 
     \ d e t a i l s   R e a d s   t h e   a c t i v e   r e g i s t e r   i n   t h e   N V I C   a n d   r e t u r n s   t h e   a c t i v e   b i t   f o r   t h e   d e v i c e   s p e c i f i c   i n t e r r u p t . 
     \ p a r a m   [ i n ]             I R Q n     D e v i c e   s p e c i f i c   i n t e r r u p t   n u m b e r . 
     \ r e t u r n                           0     I n t e r r u p t   s t a t u s   i s   n o t   a c t i v e . 
     \ r e t u r n                           1     I n t e r r u p t   s t a t u s   i s   a c t i v e . 
     \ n o t e         I R Q n   m u s t   n o t   b e   n e g a t i v e . 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ N V I C _ G e t A c t i v e ( I R Q n _ T y p e   I R Q n ) 
 { 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         r e t u r n ( ( u i n t 3 2 _ t ) ( ( ( N V I C - > I A B R [ ( ( ( u i n t 3 2 _ t ) I R Q n )   > >   5 U L ) ]   &   ( 1 U L   < <   ( ( ( u i n t 3 2 _ t ) I R Q n )   &   0 x 1 F U L ) ) )   ! =   0 U L )   ?   1 U L   :   0 U L ) ) ; 
     } 
     e l s e 
     { 
         r e t u r n ( 0 U ) ; 
     } 
 } 
 
 
 # i f   d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E )   & &   ( _ _ A R M _ F E A T U R E _ C M S E   = =   3 U ) 
 / * * 
     \ b r i e f       G e t   I n t e r r u p t   T a r g e t   S t a t e 
     \ d e t a i l s   R e a d s   t h e   i n t e r r u p t   t a r g e t   f i e l d   i n   t h e   N V I C   a n d   r e t u r n s   t h e   i n t e r r u p t   t a r g e t   b i t   f o r   t h e   d e v i c e   s p e c i f i c   i n t e r r u p t . 
     \ p a r a m   [ i n ]             I R Q n     D e v i c e   s p e c i f i c   i n t e r r u p t   n u m b e r . 
     \ r e t u r n                           0     i f   i n t e r r u p t   i s   a s s i g n e d   t o   S e c u r e 
     \ r e t u r n                           1     i f   i n t e r r u p t   i s   a s s i g n e d   t o   N o n   S e c u r e 
     \ n o t e         I R Q n   m u s t   n o t   b e   n e g a t i v e . 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   N V I C _ G e t T a r g e t S t a t e ( I R Q n _ T y p e   I R Q n ) 
 { 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         r e t u r n ( ( u i n t 3 2 _ t ) ( ( ( N V I C - > I T N S [ ( ( ( u i n t 3 2 _ t ) I R Q n )   > >   5 U L ) ]   &   ( 1 U L   < <   ( ( ( u i n t 3 2 _ t ) I R Q n )   &   0 x 1 F U L ) ) )   ! =   0 U L )   ?   1 U L   :   0 U L ) ) ; 
     } 
     e l s e 
     { 
         r e t u r n ( 0 U ) ; 
     } 
 } 
 
 
 / * * 
     \ b r i e f       S e t   I n t e r r u p t   T a r g e t   S t a t e 
     \ d e t a i l s   S e t s   t h e   i n t e r r u p t   t a r g e t   f i e l d   i n   t h e   N V I C   a n d   r e t u r n s   t h e   i n t e r r u p t   t a r g e t   b i t   f o r   t h e   d e v i c e   s p e c i f i c   i n t e r r u p t . 
     \ p a r a m   [ i n ]             I R Q n     D e v i c e   s p e c i f i c   i n t e r r u p t   n u m b e r . 
     \ r e t u r n                           0     i f   i n t e r r u p t   i s   a s s i g n e d   t o   S e c u r e 
                                             1     i f   i n t e r r u p t   i s   a s s i g n e d   t o   N o n   S e c u r e 
     \ n o t e         I R Q n   m u s t   n o t   b e   n e g a t i v e . 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   N V I C _ S e t T a r g e t S t a t e ( I R Q n _ T y p e   I R Q n ) 
 { 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         N V I C - > I T N S [ ( ( ( u i n t 3 2 _ t ) I R Q n )   > >   5 U L ) ]   | =     ( ( u i n t 3 2 _ t ) ( 1 U L   < <   ( ( ( u i n t 3 2 _ t ) I R Q n )   &   0 x 1 F U L ) ) ) ; 
         r e t u r n ( ( u i n t 3 2 _ t ) ( ( ( N V I C - > I T N S [ ( ( ( u i n t 3 2 _ t ) I R Q n )   > >   5 U L ) ]   &   ( 1 U L   < <   ( ( ( u i n t 3 2 _ t ) I R Q n )   &   0 x 1 F U L ) ) )   ! =   0 U L )   ?   1 U L   :   0 U L ) ) ; 
     } 
     e l s e 
     { 
         r e t u r n ( 0 U ) ; 
     } 
 } 
 
 
 / * * 
     \ b r i e f       C l e a r   I n t e r r u p t   T a r g e t   S t a t e 
     \ d e t a i l s   C l e a r s   t h e   i n t e r r u p t   t a r g e t   f i e l d   i n   t h e   N V I C   a n d   r e t u r n s   t h e   i n t e r r u p t   t a r g e t   b i t   f o r   t h e   d e v i c e   s p e c i f i c   i n t e r r u p t . 
     \ p a r a m   [ i n ]             I R Q n     D e v i c e   s p e c i f i c   i n t e r r u p t   n u m b e r . 
     \ r e t u r n                           0     i f   i n t e r r u p t   i s   a s s i g n e d   t o   S e c u r e 
                                             1     i f   i n t e r r u p t   i s   a s s i g n e d   t o   N o n   S e c u r e 
     \ n o t e         I R Q n   m u s t   n o t   b e   n e g a t i v e . 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   N V I C _ C l e a r T a r g e t S t a t e ( I R Q n _ T y p e   I R Q n ) 
 { 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         N V I C - > I T N S [ ( ( ( u i n t 3 2 _ t ) I R Q n )   > >   5 U L ) ]   & =   ~ ( ( u i n t 3 2 _ t ) ( 1 U L   < <   ( ( ( u i n t 3 2 _ t ) I R Q n )   &   0 x 1 F U L ) ) ) ; 
         r e t u r n ( ( u i n t 3 2 _ t ) ( ( ( N V I C - > I T N S [ ( ( ( u i n t 3 2 _ t ) I R Q n )   > >   5 U L ) ]   &   ( 1 U L   < <   ( ( ( u i n t 3 2 _ t ) I R Q n )   &   0 x 1 F U L ) ) )   ! =   0 U L )   ?   1 U L   :   0 U L ) ) ; 
     } 
     e l s e 
     { 
         r e t u r n ( 0 U ) ; 
     } 
 } 
 # e n d i f   / *   d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E )   & &   ( _ _ A R M _ F E A T U R E _ C M S E   = =   3 U )   * / 
 
 
 / * * 
     \ b r i e f       S e t   I n t e r r u p t   P r i o r i t y 
     \ d e t a i l s   S e t s   t h e   p r i o r i t y   o f   a   d e v i c e   s p e c i f i c   i n t e r r u p t   o r   a   p r o c e s s o r   e x c e p t i o n . 
                       T h e   i n t e r r u p t   n u m b e r   c a n   b e   p o s i t i v e   t o   s p e c i f y   a   d e v i c e   s p e c i f i c   i n t e r r u p t , 
                       o r   n e g a t i v e   t o   s p e c i f y   a   p r o c e s s o r   e x c e p t i o n . 
     \ p a r a m   [ i n ]             I R Q n     I n t e r r u p t   n u m b e r . 
     \ p a r a m   [ i n ]     p r i o r i t y     P r i o r i t y   t o   s e t . 
     \ n o t e         T h e   p r i o r i t y   c a n n o t   b e   s e t   f o r   e v e r y   p r o c e s s o r   e x c e p t i o n . 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   _ _ N V I C _ S e t P r i o r i t y ( I R Q n _ T y p e   I R Q n ,   u i n t 3 2 _ t   p r i o r i t y ) 
 { 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         N V I C - > I P R [ _ I P _ I D X ( I R Q n ) ]     =   ( ( u i n t 3 2 _ t ) ( N V I C - > I P R [ _ I P _ I D X ( I R Q n ) ]     &   ~ ( 0 x F F U L   < <   _ B I T _ S H I F T ( I R Q n ) ) )   | 
               ( ( ( p r i o r i t y   < <   ( 8 U   -   _ _ N V I C _ P R I O _ B I T S ) )   &   ( u i n t 3 2 _ t ) 0 x F F U L )   < <   _ B I T _ S H I F T ( I R Q n ) ) ) ; 
     } 
     e l s e 
     { 
         S C B - > S H P R [ _ S H P _ I D X ( I R Q n ) ]   =   ( ( u i n t 3 2 _ t ) ( S C B - > S H P R [ _ S H P _ I D X ( I R Q n ) ]   &   ~ ( 0 x F F U L   < <   _ B I T _ S H I F T ( I R Q n ) ) )   | 
               ( ( ( p r i o r i t y   < <   ( 8 U   -   _ _ N V I C _ P R I O _ B I T S ) )   &   ( u i n t 3 2 _ t ) 0 x F F U L )   < <   _ B I T _ S H I F T ( I R Q n ) ) ) ; 
     } 
 } 
 
 
 / * * 
     \ b r i e f       G e t   I n t e r r u p t   P r i o r i t y 
     \ d e t a i l s   R e a d s   t h e   p r i o r i t y   o f   a   d e v i c e   s p e c i f i c   i n t e r r u p t   o r   a   p r o c e s s o r   e x c e p t i o n . 
                       T h e   i n t e r r u p t   n u m b e r   c a n   b e   p o s i t i v e   t o   s p e c i f y   a   d e v i c e   s p e c i f i c   i n t e r r u p t , 
                       o r   n e g a t i v e   t o   s p e c i f y   a   p r o c e s s o r   e x c e p t i o n . 
     \ p a r a m   [ i n ]       I R Q n     I n t e r r u p t   n u m b e r . 
     \ r e t u r n                           I n t e r r u p t   P r i o r i t y . 
                                             V a l u e   i s   a l i g n e d   a u t o m a t i c a l l y   t o   t h e   i m p l e m e n t e d   p r i o r i t y   b i t s   o f   t h e   m i c r o c o n t r o l l e r . 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ N V I C _ G e t P r i o r i t y ( I R Q n _ T y p e   I R Q n ) 
 { 
 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         r e t u r n ( ( u i n t 3 2 _ t ) ( ( ( N V I C - > I P R [   _ I P _ I D X ( I R Q n ) ]   > >   _ B I T _ S H I F T ( I R Q n )   )   &   ( u i n t 3 2 _ t ) 0 x F F U L )   > >   ( 8 U   -   _ _ N V I C _ P R I O _ B I T S ) ) ) ; 
     } 
     e l s e 
     { 
         r e t u r n ( ( u i n t 3 2 _ t ) ( ( ( S C B - > S H P R [ _ S H P _ I D X ( I R Q n ) ]   > >   _ B I T _ S H I F T ( I R Q n )   )   &   ( u i n t 3 2 _ t ) 0 x F F U L )   > >   ( 8 U   -   _ _ N V I C _ P R I O _ B I T S ) ) ) ; 
     } 
 } 
 
 
 / * * 
     \ b r i e f       E n c o d e   P r i o r i t y 
     \ d e t a i l s   E n c o d e s   t h e   p r i o r i t y   f o r   a n   i n t e r r u p t   w i t h   t h e   g i v e n   p r i o r i t y   g r o u p , 
                       p r e e m p t i v e   p r i o r i t y   v a l u e ,   a n d   s u b p r i o r i t y   v a l u e . 
                       I n   c a s e   o f   a   c o n f l i c t   b e t w e e n   p r i o r i t y   g r o u p i n g   a n d   a v a i l a b l e 
                       p r i o r i t y   b i t s   ( _ _ N V I C _ P R I O _ B I T S ) ,   t h e   s m a l l e s t   p o s s i b l e   p r i o r i t y   g r o u p   i s   s e t . 
     \ p a r a m   [ i n ]           P r i o r i t y G r o u p     U s e d   p r i o r i t y   g r o u p . 
     \ p a r a m   [ i n ]       P r e e m p t P r i o r i t y     P r e e m p t i v e   p r i o r i t y   v a l u e   ( s t a r t i n g   f r o m   0 ) . 
     \ p a r a m   [ i n ]               S u b P r i o r i t y     S u b p r i o r i t y   v a l u e   ( s t a r t i n g   f r o m   0 ) . 
     \ r e t u r n                                                 E n c o d e d   p r i o r i t y .   V a l u e   c a n   b e   u s e d   i n   t h e   f u n c t i o n   \ r e f   N V I C _ S e t P r i o r i t y ( ) . 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   N V I C _ E n c o d e P r i o r i t y   ( u i n t 3 2 _ t   P r i o r i t y G r o u p ,   u i n t 3 2 _ t   P r e e m p t P r i o r i t y ,   u i n t 3 2 _ t   S u b P r i o r i t y ) 
 { 
     u i n t 3 2 _ t   P r i o r i t y G r o u p T m p   =   ( P r i o r i t y G r o u p   &   ( u i n t 3 2 _ t ) 0 x 0 7 U L ) ;       / *   o n l y   v a l u e s   0 . . 7   a r e   u s e d                     * / 
     u i n t 3 2 _ t   P r e e m p t P r i o r i t y B i t s ; 
     u i n t 3 2 _ t   S u b P r i o r i t y B i t s ; 
 
     P r e e m p t P r i o r i t y B i t s   =   ( ( 7 U L   -   P r i o r i t y G r o u p T m p )   >   ( u i n t 3 2 _ t ) ( _ _ N V I C _ P R I O _ B I T S ) )   ?   ( u i n t 3 2 _ t ) ( _ _ N V I C _ P R I O _ B I T S )   :   ( u i n t 3 2 _ t ) ( 7 U L   -   P r i o r i t y G r o u p T m p ) ; 
     S u b P r i o r i t y B i t s           =   ( ( P r i o r i t y G r o u p T m p   +   ( u i n t 3 2 _ t ) ( _ _ N V I C _ P R I O _ B I T S ) )   <   ( u i n t 3 2 _ t ) 7 U L )   ?   ( u i n t 3 2 _ t ) 0 U L   :   ( u i n t 3 2 _ t ) ( ( P r i o r i t y G r o u p T m p   -   7 U L )   +   ( u i n t 3 2 _ t ) ( _ _ N V I C _ P R I O _ B I T S ) ) ; 
 
     r e t u r n   ( 
                       ( ( P r e e m p t P r i o r i t y   &   ( u i n t 3 2 _ t ) ( ( 1 U L   < <   ( P r e e m p t P r i o r i t y B i t s ) )   -   1 U L ) )   < <   S u b P r i o r i t y B i t s )   | 
                       ( ( S u b P r i o r i t y           &   ( u i n t 3 2 _ t ) ( ( 1 U L   < <   ( S u b P r i o r i t y B i t s         ) )   -   1 U L ) ) ) 
                   ) ; 
 } 
 
 
 / * * 
     \ b r i e f       D e c o d e   P r i o r i t y 
     \ d e t a i l s   D e c o d e s   a n   i n t e r r u p t   p r i o r i t y   v a l u e   w i t h   a   g i v e n   p r i o r i t y   g r o u p   t o 
                       p r e e m p t i v e   p r i o r i t y   v a l u e   a n d   s u b p r i o r i t y   v a l u e . 
                       I n   c a s e   o f   a   c o n f l i c t   b e t w e e n   p r i o r i t y   g r o u p i n g   a n d   a v a i l a b l e 
                       p r i o r i t y   b i t s   ( _ _ N V I C _ P R I O _ B I T S )   t h e   s m a l l e s t   p o s s i b l e   p r i o r i t y   g r o u p   i s   s e t . 
     \ p a r a m   [ i n ]                   P r i o r i t y       P r i o r i t y   v a l u e ,   w h i c h   c a n   b e   r e t r i e v e d   w i t h   t h e   f u n c t i o n   \ r e f   N V I C _ G e t P r i o r i t y ( ) . 
     \ p a r a m   [ i n ]           P r i o r i t y G r o u p     U s e d   p r i o r i t y   g r o u p . 
     \ p a r a m   [ o u t ]   p P r e e m p t P r i o r i t y     P r e e m p t i v e   p r i o r i t y   v a l u e   ( s t a r t i n g   f r o m   0 ) . 
     \ p a r a m   [ o u t ]           p S u b P r i o r i t y     S u b p r i o r i t y   v a l u e   ( s t a r t i n g   f r o m   0 ) . 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   N V I C _ D e c o d e P r i o r i t y   ( u i n t 3 2 _ t   P r i o r i t y ,   u i n t 3 2 _ t   P r i o r i t y G r o u p ,   u i n t 3 2 _ t *   c o n s t   p P r e e m p t P r i o r i t y ,   u i n t 3 2 _ t *   c o n s t   p S u b P r i o r i t y ) 
 { 
     u i n t 3 2 _ t   P r i o r i t y G r o u p T m p   =   ( P r i o r i t y G r o u p   &   ( u i n t 3 2 _ t ) 0 x 0 7 U L ) ;       / *   o n l y   v a l u e s   0 . . 7   a r e   u s e d                     * / 
     u i n t 3 2 _ t   P r e e m p t P r i o r i t y B i t s ; 
     u i n t 3 2 _ t   S u b P r i o r i t y B i t s ; 
 
     P r e e m p t P r i o r i t y B i t s   =   ( ( 7 U L   -   P r i o r i t y G r o u p T m p )   >   ( u i n t 3 2 _ t ) ( _ _ N V I C _ P R I O _ B I T S ) )   ?   ( u i n t 3 2 _ t ) ( _ _ N V I C _ P R I O _ B I T S )   :   ( u i n t 3 2 _ t ) ( 7 U L   -   P r i o r i t y G r o u p T m p ) ; 
     S u b P r i o r i t y B i t s           =   ( ( P r i o r i t y G r o u p T m p   +   ( u i n t 3 2 _ t ) ( _ _ N V I C _ P R I O _ B I T S ) )   <   ( u i n t 3 2 _ t ) 7 U L )   ?   ( u i n t 3 2 _ t ) 0 U L   :   ( u i n t 3 2 _ t ) ( ( P r i o r i t y G r o u p T m p   -   7 U L )   +   ( u i n t 3 2 _ t ) ( _ _ N V I C _ P R I O _ B I T S ) ) ; 
 
     * p P r e e m p t P r i o r i t y   =   ( P r i o r i t y   > >   S u b P r i o r i t y B i t s )   &   ( u i n t 3 2 _ t ) ( ( 1 U L   < <   ( P r e e m p t P r i o r i t y B i t s ) )   -   1 U L ) ; 
     * p S u b P r i o r i t y           =   ( P r i o r i t y                                       )   &   ( u i n t 3 2 _ t ) ( ( 1 U L   < <   ( S u b P r i o r i t y B i t s         ) )   -   1 U L ) ; 
 } 
 
 
 / * * 
     \ b r i e f       S e t   I n t e r r u p t   V e c t o r 
     \ d e t a i l s   S e t s   a n   i n t e r r u p t   v e c t o r   i n   S R A M   b a s e d   i n t e r r u p t   v e c t o r   t a b l e . 
                       T h e   i n t e r r u p t   n u m b e r   c a n   b e   p o s i t i v e   t o   s p e c i f y   a   d e v i c e   s p e c i f i c   i n t e r r u p t , 
                       o r   n e g a t i v e   t o   s p e c i f y   a   p r o c e s s o r   e x c e p t i o n . 
                       V T O R   m u s t   b e e n   r e l o c a t e d   t o   S R A M   b e f o r e . 
                       I f   V T O R   i s   n o t   p r e s e n t   a d d r e s s   0   m u s t   b e   m a p p e d   t o   S R A M . 
     \ p a r a m   [ i n ]       I R Q n             I n t e r r u p t   n u m b e r 
     \ p a r a m   [ i n ]       v e c t o r         A d d r e s s   o f   i n t e r r u p t   h a n d l e r   f u n c t i o n 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   _ _ N V I C _ S e t V e c t o r ( I R Q n _ T y p e   I R Q n ,   u i n t 3 2 _ t   v e c t o r ) 
 { 
 # i f   d e f i n e d   ( _ _ V T O R _ P R E S E N T )   & &   ( _ _ V T O R _ P R E S E N T   = =   1 U ) 
     u i n t 3 2 _ t   * v e c t o r s   =   ( u i n t 3 2 _ t   * ) S C B - > V T O R ; 
 # e l s e 
     u i n t 3 2 _ t   * v e c t o r s   =   ( u i n t 3 2 _ t   * ) 0 x 0 U ; 
 # e n d i f 
     v e c t o r s [ ( i n t 3 2 _ t ) I R Q n   +   N V I C _ U S E R _ I R Q _ O F F S E T ]   =   v e c t o r ; 
 } 
 
 
 / * * 
     \ b r i e f       G e t   I n t e r r u p t   V e c t o r 
     \ d e t a i l s   R e a d s   a n   i n t e r r u p t   v e c t o r   f r o m   i n t e r r u p t   v e c t o r   t a b l e . 
                       T h e   i n t e r r u p t   n u m b e r   c a n   b e   p o s i t i v e   t o   s p e c i f y   a   d e v i c e   s p e c i f i c   i n t e r r u p t , 
                       o r   n e g a t i v e   t o   s p e c i f y   a   p r o c e s s o r   e x c e p t i o n . 
     \ p a r a m   [ i n ]       I R Q n             I n t e r r u p t   n u m b e r . 
     \ r e t u r n                                   A d d r e s s   o f   i n t e r r u p t   h a n d l e r   f u n c t i o n 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   _ _ N V I C _ G e t V e c t o r ( I R Q n _ T y p e   I R Q n ) 
 { 
 # i f   d e f i n e d   ( _ _ V T O R _ P R E S E N T )   & &   ( _ _ V T O R _ P R E S E N T   = =   1 U ) 
     u i n t 3 2 _ t   * v e c t o r s   =   ( u i n t 3 2 _ t   * ) S C B - > V T O R ; 
 # e l s e 
     u i n t 3 2 _ t   * v e c t o r s   =   ( u i n t 3 2 _ t   * ) 0 x 0 U ; 
 # e n d i f 
     r e t u r n   v e c t o r s [ ( i n t 3 2 _ t ) I R Q n   +   N V I C _ U S E R _ I R Q _ O F F S E T ] ; 
 } 
 
 
 / * * 
     \ b r i e f       S y s t e m   R e s e t 
     \ d e t a i l s   I n i t i a t e s   a   s y s t e m   r e s e t   r e q u e s t   t o   r e s e t   t h e   M C U . 
   * / 
 _ _ N O _ R E T U R N   _ _ S T A T I C _ I N L I N E   v o i d   _ _ N V I C _ S y s t e m R e s e t ( v o i d ) 
 { 
     _ _ D S B ( ) ;                                                                                                                     / *   E n s u r e   a l l   o u t s t a n d i n g   m e m o r y   a c c e s s e s   i n c l u d e d 
                                                                                                                                               b u f f e r e d   w r i t e   a r e   c o m p l e t e d   b e f o r e   r e s e t   * / 
     S C B - > A I R C R     =   ( ( 0 x 5 F A U L   < <   S C B _ A I R C R _ V E C T K E Y _ P o s )   | 
                                   S C B _ A I R C R _ S Y S R E S E T R E Q _ M s k ) ; 
     _ _ D S B ( ) ;                                                                                                                     / *   E n s u r e   c o m p l e t i o n   o f   m e m o r y   a c c e s s   * / 
 
     f o r ( ; ; )                                                                                                                       / *   w a i t   u n t i l   r e s e t   * / 
     { 
         _ _ N O P ( ) ; 
     } 
 } 
 
 # i f   d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E )   & &   ( _ _ A R M _ F E A T U R E _ C M S E   = =   3 U ) 
 / * * 
     \ b r i e f       E n a b l e   I n t e r r u p t   ( n o n - s e c u r e ) 
     \ d e t a i l s   E n a b l e s   a   d e v i c e   s p e c i f i c   i n t e r r u p t   i n   t h e   n o n - s e c u r e   N V I C   i n t e r r u p t   c o n t r o l l e r   w h e n   i n   s e c u r e   s t a t e . 
     \ p a r a m   [ i n ]             I R Q n     D e v i c e   s p e c i f i c   i n t e r r u p t   n u m b e r . 
     \ n o t e         I R Q n   m u s t   n o t   b e   n e g a t i v e . 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   T Z _ N V I C _ E n a b l e I R Q _ N S ( I R Q n _ T y p e   I R Q n ) 
 { 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         N V I C _ N S - > I S E R [ ( ( ( u i n t 3 2 _ t ) I R Q n )   > >   5 U L ) ]   =   ( u i n t 3 2 _ t ) ( 1 U L   < <   ( ( ( u i n t 3 2 _ t ) I R Q n )   &   0 x 1 F U L ) ) ; 
     } 
 } 
 
 
 / * * 
     \ b r i e f       G e t   I n t e r r u p t   E n a b l e   s t a t u s   ( n o n - s e c u r e ) 
     \ d e t a i l s   R e t u r n s   a   d e v i c e   s p e c i f i c   i n t e r r u p t   e n a b l e   s t a t u s   f r o m   t h e   n o n - s e c u r e   N V I C   i n t e r r u p t   c o n t r o l l e r   w h e n   i n   s e c u r e   s t a t e . 
     \ p a r a m   [ i n ]             I R Q n     D e v i c e   s p e c i f i c   i n t e r r u p t   n u m b e r . 
     \ r e t u r n                           0     I n t e r r u p t   i s   n o t   e n a b l e d . 
     \ r e t u r n                           1     I n t e r r u p t   i s   e n a b l e d . 
     \ n o t e         I R Q n   m u s t   n o t   b e   n e g a t i v e . 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   T Z _ N V I C _ G e t E n a b l e I R Q _ N S ( I R Q n _ T y p e   I R Q n ) 
 { 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         r e t u r n ( ( u i n t 3 2 _ t ) ( ( ( N V I C _ N S - > I S E R [ ( ( ( u i n t 3 2 _ t ) I R Q n )   > >   5 U L ) ]   &   ( 1 U L   < <   ( ( ( u i n t 3 2 _ t ) I R Q n )   &   0 x 1 F U L ) ) )   ! =   0 U L )   ?   1 U L   :   0 U L ) ) ; 
     } 
     e l s e 
     { 
         r e t u r n ( 0 U ) ; 
     } 
 } 
 
 
 / * * 
     \ b r i e f       D i s a b l e   I n t e r r u p t   ( n o n - s e c u r e ) 
     \ d e t a i l s   D i s a b l e s   a   d e v i c e   s p e c i f i c   i n t e r r u p t   i n   t h e   n o n - s e c u r e   N V I C   i n t e r r u p t   c o n t r o l l e r   w h e n   i n   s e c u r e   s t a t e . 
     \ p a r a m   [ i n ]             I R Q n     D e v i c e   s p e c i f i c   i n t e r r u p t   n u m b e r . 
     \ n o t e         I R Q n   m u s t   n o t   b e   n e g a t i v e . 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   T Z _ N V I C _ D i s a b l e I R Q _ N S ( I R Q n _ T y p e   I R Q n ) 
 { 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         N V I C _ N S - > I C E R [ ( ( ( u i n t 3 2 _ t ) I R Q n )   > >   5 U L ) ]   =   ( u i n t 3 2 _ t ) ( 1 U L   < <   ( ( ( u i n t 3 2 _ t ) I R Q n )   &   0 x 1 F U L ) ) ; 
     } 
 } 
 
 
 / * * 
     \ b r i e f       G e t   P e n d i n g   I n t e r r u p t   ( n o n - s e c u r e ) 
     \ d e t a i l s   R e a d s   t h e   N V I C   p e n d i n g   r e g i s t e r   i n   t h e   n o n - s e c u r e   N V I C   w h e n   i n   s e c u r e   s t a t e   a n d   r e t u r n s   t h e   p e n d i n g   b i t   f o r   t h e   s p e c i f i e d   d e v i c e   s p e c i f i c   i n t e r r u p t . 
     \ p a r a m   [ i n ]             I R Q n     D e v i c e   s p e c i f i c   i n t e r r u p t   n u m b e r . 
     \ r e t u r n                           0     I n t e r r u p t   s t a t u s   i s   n o t   p e n d i n g . 
     \ r e t u r n                           1     I n t e r r u p t   s t a t u s   i s   p e n d i n g . 
     \ n o t e         I R Q n   m u s t   n o t   b e   n e g a t i v e . 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   T Z _ N V I C _ G e t P e n d i n g I R Q _ N S ( I R Q n _ T y p e   I R Q n ) 
 { 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         r e t u r n ( ( u i n t 3 2 _ t ) ( ( ( N V I C _ N S - > I S P R [ ( ( ( u i n t 3 2 _ t ) I R Q n )   > >   5 U L ) ]   &   ( 1 U L   < <   ( ( ( u i n t 3 2 _ t ) I R Q n )   &   0 x 1 F U L ) ) )   ! =   0 U L )   ?   1 U L   :   0 U L ) ) ; 
     } 
     e l s e 
     { 
         r e t u r n ( 0 U ) ; 
     } 
 } 
 
 
 / * * 
     \ b r i e f       S e t   P e n d i n g   I n t e r r u p t   ( n o n - s e c u r e ) 
     \ d e t a i l s   S e t s   t h e   p e n d i n g   b i t   o f   a   d e v i c e   s p e c i f i c   i n t e r r u p t   i n   t h e   n o n - s e c u r e   N V I C   p e n d i n g   r e g i s t e r   w h e n   i n   s e c u r e   s t a t e . 
     \ p a r a m   [ i n ]             I R Q n     D e v i c e   s p e c i f i c   i n t e r r u p t   n u m b e r . 
     \ n o t e         I R Q n   m u s t   n o t   b e   n e g a t i v e . 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   T Z _ N V I C _ S e t P e n d i n g I R Q _ N S ( I R Q n _ T y p e   I R Q n ) 
 { 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         N V I C _ N S - > I S P R [ ( ( ( u i n t 3 2 _ t ) I R Q n )   > >   5 U L ) ]   =   ( u i n t 3 2 _ t ) ( 1 U L   < <   ( ( ( u i n t 3 2 _ t ) I R Q n )   &   0 x 1 F U L ) ) ; 
     } 
 } 
 
 
 / * * 
     \ b r i e f       C l e a r   P e n d i n g   I n t e r r u p t   ( n o n - s e c u r e ) 
     \ d e t a i l s   C l e a r s   t h e   p e n d i n g   b i t   o f   a   d e v i c e   s p e c i f i c   i n t e r r u p t   i n   t h e   n o n - s e c u r e   N V I C   p e n d i n g   r e g i s t e r   w h e n   i n   s e c u r e   s t a t e . 
     \ p a r a m   [ i n ]             I R Q n     D e v i c e   s p e c i f i c   i n t e r r u p t   n u m b e r . 
     \ n o t e         I R Q n   m u s t   n o t   b e   n e g a t i v e . 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   T Z _ N V I C _ C l e a r P e n d i n g I R Q _ N S ( I R Q n _ T y p e   I R Q n ) 
 { 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         N V I C _ N S - > I C P R [ ( ( ( u i n t 3 2 _ t ) I R Q n )   > >   5 U L ) ]   =   ( u i n t 3 2 _ t ) ( 1 U L   < <   ( ( ( u i n t 3 2 _ t ) I R Q n )   &   0 x 1 F U L ) ) ; 
     } 
 } 
 
 
 / * * 
     \ b r i e f       G e t   A c t i v e   I n t e r r u p t   ( n o n - s e c u r e ) 
     \ d e t a i l s   R e a d s   t h e   a c t i v e   r e g i s t e r   i n   n o n - s e c u r e   N V I C   w h e n   i n   s e c u r e   s t a t e   a n d   r e t u r n s   t h e   a c t i v e   b i t   f o r   t h e   d e v i c e   s p e c i f i c   i n t e r r u p t . 
     \ p a r a m   [ i n ]             I R Q n     D e v i c e   s p e c i f i c   i n t e r r u p t   n u m b e r . 
     \ r e t u r n                           0     I n t e r r u p t   s t a t u s   i s   n o t   a c t i v e . 
     \ r e t u r n                           1     I n t e r r u p t   s t a t u s   i s   a c t i v e . 
     \ n o t e         I R Q n   m u s t   n o t   b e   n e g a t i v e . 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   T Z _ N V I C _ G e t A c t i v e _ N S ( I R Q n _ T y p e   I R Q n ) 
 { 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         r e t u r n ( ( u i n t 3 2 _ t ) ( ( ( N V I C _ N S - > I A B R [ ( ( ( u i n t 3 2 _ t ) I R Q n )   > >   5 U L ) ]   &   ( 1 U L   < <   ( ( ( u i n t 3 2 _ t ) I R Q n )   &   0 x 1 F U L ) ) )   ! =   0 U L )   ?   1 U L   :   0 U L ) ) ; 
     } 
     e l s e 
     { 
         r e t u r n ( 0 U ) ; 
     } 
 } 
 
 
 / * * 
     \ b r i e f       S e t   I n t e r r u p t   P r i o r i t y   ( n o n - s e c u r e ) 
     \ d e t a i l s   S e t s   t h e   p r i o r i t y   o f   a   n o n - s e c u r e   d e v i c e   s p e c i f i c   i n t e r r u p t   o r   a   n o n - s e c u r e   p r o c e s s o r   e x c e p t i o n   w h e n   i n   s e c u r e   s t a t e . 
                       T h e   i n t e r r u p t   n u m b e r   c a n   b e   p o s i t i v e   t o   s p e c i f y   a   d e v i c e   s p e c i f i c   i n t e r r u p t , 
                       o r   n e g a t i v e   t o   s p e c i f y   a   p r o c e s s o r   e x c e p t i o n . 
     \ p a r a m   [ i n ]             I R Q n     I n t e r r u p t   n u m b e r . 
     \ p a r a m   [ i n ]     p r i o r i t y     P r i o r i t y   t o   s e t . 
     \ n o t e         T h e   p r i o r i t y   c a n n o t   b e   s e t   f o r   e v e r y   n o n - s e c u r e   p r o c e s s o r   e x c e p t i o n . 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   T Z _ N V I C _ S e t P r i o r i t y _ N S ( I R Q n _ T y p e   I R Q n ,   u i n t 3 2 _ t   p r i o r i t y ) 
 { 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         N V I C _ N S - > I P R [ _ I P _ I D X ( I R Q n ) ]     =   ( ( u i n t 3 2 _ t ) ( N V I C _ N S - > I P R [ _ I P _ I D X ( I R Q n ) ]     &   ~ ( 0 x F F U L   < <   _ B I T _ S H I F T ( I R Q n ) ) )   | 
               ( ( ( p r i o r i t y   < <   ( 8 U   -   _ _ N V I C _ P R I O _ B I T S ) )   &   ( u i n t 3 2 _ t ) 0 x F F U L )   < <   _ B I T _ S H I F T ( I R Q n ) ) ) ; 
     } 
     e l s e 
     { 
         S C B _ N S - > S H P R [ _ S H P _ I D X ( I R Q n ) ]   =   ( ( u i n t 3 2 _ t ) ( S C B _ N S - > S H P R [ _ S H P _ I D X ( I R Q n ) ]   &   ~ ( 0 x F F U L   < <   _ B I T _ S H I F T ( I R Q n ) ) )   | 
               ( ( ( p r i o r i t y   < <   ( 8 U   -   _ _ N V I C _ P R I O _ B I T S ) )   &   ( u i n t 3 2 _ t ) 0 x F F U L )   < <   _ B I T _ S H I F T ( I R Q n ) ) ) ; 
     } 
 } 
 
 
 / * * 
     \ b r i e f       G e t   I n t e r r u p t   P r i o r i t y   ( n o n - s e c u r e ) 
     \ d e t a i l s   R e a d s   t h e   p r i o r i t y   o f   a   n o n - s e c u r e   d e v i c e   s p e c i f i c   i n t e r r u p t   o r   a   n o n - s e c u r e   p r o c e s s o r   e x c e p t i o n   w h e n   i n   s e c u r e   s t a t e . 
                       T h e   i n t e r r u p t   n u m b e r   c a n   b e   p o s i t i v e   t o   s p e c i f y   a   d e v i c e   s p e c i f i c   i n t e r r u p t , 
                       o r   n e g a t i v e   t o   s p e c i f y   a   p r o c e s s o r   e x c e p t i o n . 
     \ p a r a m   [ i n ]       I R Q n     I n t e r r u p t   n u m b e r . 
     \ r e t u r n                           I n t e r r u p t   P r i o r i t y .   V a l u e   i s   a l i g n e d   a u t o m a t i c a l l y   t o   t h e   i m p l e m e n t e d   p r i o r i t y   b i t s   o f   t h e   m i c r o c o n t r o l l e r . 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   T Z _ N V I C _ G e t P r i o r i t y _ N S ( I R Q n _ T y p e   I R Q n ) 
 { 
 
     i f   ( ( i n t 3 2 _ t ) ( I R Q n )   > =   0 ) 
     { 
         r e t u r n ( ( u i n t 3 2 _ t ) ( ( ( N V I C _ N S - > I P R [   _ I P _ I D X ( I R Q n ) ]   > >   _ B I T _ S H I F T ( I R Q n )   )   &   ( u i n t 3 2 _ t ) 0 x F F U L )   > >   ( 8 U   -   _ _ N V I C _ P R I O _ B I T S ) ) ) ; 
     } 
     e l s e 
     { 
         r e t u r n ( ( u i n t 3 2 _ t ) ( ( ( S C B _ N S - > S H P R [ _ S H P _ I D X ( I R Q n ) ]   > >   _ B I T _ S H I F T ( I R Q n )   )   &   ( u i n t 3 2 _ t ) 0 x F F U L )   > >   ( 8 U   -   _ _ N V I C _ P R I O _ B I T S ) ) ) ; 
     } 
 } 
 # e n d i f   / *     d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E )   & & ( _ _ A R M _ F E A T U R E _ C M S E   = =   3 U )   * / 
 
 / * @ }   e n d   o f   C M S I S _ C o r e _ N V I C F u n c t i o n s   * / 
 
 / *   # # # # # # # # # # # # # # # # # # # # # # # # # #     M P U   f u n c t i o n s     # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #   * / 
 
 # i f   d e f i n e d   ( _ _ M P U _ P R E S E N T )   & &   ( _ _ M P U _ P R E S E N T   = =   1 U ) 
 
 # i n c l u d e   " m p u _ a r m v 8 . h " 
 
 # e n d i f 
 
 / *   # # # # # # # # # # # # # # # # # # # # # # # # # #     F P U   f u n c t i o n s     # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #   * / 
 / * * 
     \ i n g r o u p     C M S I S _ C o r e _ F u n c t i o n I n t e r f a c e 
     \ d e f g r o u p   C M S I S _ C o r e _ F p u F u n c t i o n s   F P U   F u n c t i o n s 
     \ b r i e f         F u n c t i o n   t h a t   p r o v i d e s   F P U   t y p e . 
     @ { 
   * / 
 
 / * * 
     \ b r i e f       g e t   F P U   t y p e 
     \ d e t a i l s   r e t u r n s   t h e   F P U   t y p e 
     \ r e t u r n s 
       -   \ b     0 :   N o   F P U 
       -   \ b     1 :   S i n g l e   p r e c i s i o n   F P U 
       -   \ b     2 :   D o u b l e   +   S i n g l e   p r e c i s i o n   F P U 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   S C B _ G e t F P U T y p e ( v o i d ) 
 { 
         r e t u r n   0 U ;                       / *   N o   F P U   * / 
 } 
 
 
 / * @ }   e n d   o f   C M S I S _ C o r e _ F p u F u n c t i o n s   * / 
 
 
 
 / *   # # # # # # # # # # # # # # # # # # # # # # # # # #       S A U   f u n c t i o n s     # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #   * / 
 / * * 
     \ i n g r o u p     C M S I S _ C o r e _ F u n c t i o n I n t e r f a c e 
     \ d e f g r o u p   C M S I S _ C o r e _ S A U F u n c t i o n s   S A U   F u n c t i o n s 
     \ b r i e f         F u n c t i o n s   t h a t   c o n f i g u r e   t h e   S A U . 
     @ { 
   * / 
 
 # i f   d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E )   & &   ( _ _ A R M _ F E A T U R E _ C M S E   = =   3 U ) 
 
 / * * 
     \ b r i e f       E n a b l e   S A U 
     \ d e t a i l s   E n a b l e s   t h e   S e c u r i t y   A t t r i b u t i o n   U n i t   ( S A U ) . 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   T Z _ S A U _ E n a b l e ( v o i d ) 
 { 
         S A U - > C T R L   | =     ( S A U _ C T R L _ E N A B L E _ M s k ) ; 
 } 
 
 
 
 / * * 
     \ b r i e f       D i s a b l e   S A U 
     \ d e t a i l s   D i s a b l e s   t h e   S e c u r i t y   A t t r i b u t i o n   U n i t   ( S A U ) . 
   * / 
 _ _ S T A T I C _ I N L I N E   v o i d   T Z _ S A U _ D i s a b l e ( v o i d ) 
 { 
         S A U - > C T R L   & =   ~ ( S A U _ C T R L _ E N A B L E _ M s k ) ; 
 } 
 
 # e n d i f   / *   d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E )   & &   ( _ _ A R M _ F E A T U R E _ C M S E   = =   3 U )   * / 
 
 / * @ }   e n d   o f   C M S I S _ C o r e _ S A U F u n c t i o n s   * / 
 
 
 
 
 / *   # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #         S y s T i c k   f u n c t i o n     # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #   * / 
 / * * 
     \ i n g r o u p     C M S I S _ C o r e _ F u n c t i o n I n t e r f a c e 
     \ d e f g r o u p   C M S I S _ C o r e _ S y s T i c k F u n c t i o n s   S y s T i c k   F u n c t i o n s 
     \ b r i e f         F u n c t i o n s   t h a t   c o n f i g u r e   t h e   S y s t e m . 
     @ { 
   * / 
 
 # i f   d e f i n e d   ( _ _ V e n d o r _ S y s T i c k C o n f i g )   & &   ( _ _ V e n d o r _ S y s T i c k C o n f i g   = =   0 U ) 
 
 / * * 
     \ b r i e f       S y s t e m   T i c k   C o n f i g u r a t i o n 
     \ d e t a i l s   I n i t i a l i z e s   t h e   S y s t e m   T i m e r   a n d   i t s   i n t e r r u p t ,   a n d   s t a r t s   t h e   S y s t e m   T i c k   T i m e r . 
                       C o u n t e r   i s   i n   f r e e   r u n n i n g   m o d e   t o   g e n e r a t e   p e r i o d i c   i n t e r r u p t s . 
     \ p a r a m   [ i n ]     t i c k s     N u m b e r   o f   t i c k s   b e t w e e n   t w o   i n t e r r u p t s . 
     \ r e t u r n                     0     F u n c t i o n   s u c c e e d e d . 
     \ r e t u r n                     1     F u n c t i o n   f a i l e d . 
     \ n o t e         W h e n   t h e   v a r i a b l e   < b > _ _ V e n d o r _ S y s T i c k C o n f i g < / b >   i s   s e t   t o   1 ,   t h e n   t h e 
                       f u n c t i o n   < b > S y s T i c k _ C o n f i g < / b >   i s   n o t   i n c l u d e d .   I n   t h i s   c a s e ,   t h e   f i l e   < b > < i > d e v i c e < / i > . h < / b > 
                       m u s t   c o n t a i n   a   v e n d o r - s p e c i f i c   i m p l e m e n t a t i o n   o f   t h i s   f u n c t i o n . 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   S y s T i c k _ C o n f i g ( u i n t 3 2 _ t   t i c k s ) 
 { 
     i f   ( ( t i c k s   -   1 U L )   >   S y s T i c k _ L O A D _ R E L O A D _ M s k ) 
     { 
         r e t u r n   ( 1 U L ) ;                                                                                                       / *   R e l o a d   v a l u e   i m p o s s i b l e   * / 
     } 
 
     S y s T i c k - > L O A D     =   ( u i n t 3 2 _ t ) ( t i c k s   -   1 U L ) ;                                                   / *   s e t   r e l o a d   r e g i s t e r   * / 
     N V I C _ S e t P r i o r i t y   ( S y s T i c k _ I R Q n ,   ( 1 U L   < <   _ _ N V I C _ P R I O _ B I T S )   -   1 U L ) ;   / *   s e t   P r i o r i t y   f o r   S y s t i c k   I n t e r r u p t   * / 
     S y s T i c k - > V A L       =   0 U L ;                                                                                           / *   L o a d   t h e   S y s T i c k   C o u n t e r   V a l u e   * / 
     S y s T i c k - > C T R L     =   S y s T i c k _ C T R L _ C L K S O U R C E _ M s k   | 
                                       S y s T i c k _ C T R L _ T I C K I N T _ M s k       | 
                                       S y s T i c k _ C T R L _ E N A B L E _ M s k ;                                                   / *   E n a b l e   S y s T i c k   I R Q   a n d   S y s T i c k   T i m e r   * / 
     r e t u r n   ( 0 U L ) ;                                                                                                           / *   F u n c t i o n   s u c c e s s f u l   * / 
 } 
 
 # i f   d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E )   & &   ( _ _ A R M _ F E A T U R E _ C M S E   = =   3 U ) 
 / * * 
     \ b r i e f       S y s t e m   T i c k   C o n f i g u r a t i o n   ( n o n - s e c u r e ) 
     \ d e t a i l s   I n i t i a l i z e s   t h e   n o n - s e c u r e   S y s t e m   T i m e r   a n d   i t s   i n t e r r u p t   w h e n   i n   s e c u r e   s t a t e ,   a n d   s t a r t s   t h e   S y s t e m   T i c k   T i m e r . 
                       C o u n t e r   i s   i n   f r e e   r u n n i n g   m o d e   t o   g e n e r a t e   p e r i o d i c   i n t e r r u p t s . 
     \ p a r a m   [ i n ]     t i c k s     N u m b e r   o f   t i c k s   b e t w e e n   t w o   i n t e r r u p t s . 
     \ r e t u r n                     0     F u n c t i o n   s u c c e e d e d . 
     \ r e t u r n                     1     F u n c t i o n   f a i l e d . 
     \ n o t e         W h e n   t h e   v a r i a b l e   < b > _ _ V e n d o r _ S y s T i c k C o n f i g < / b >   i s   s e t   t o   1 ,   t h e n   t h e 
                       f u n c t i o n   < b > T Z _ S y s T i c k _ C o n f i g _ N S < / b >   i s   n o t   i n c l u d e d .   I n   t h i s   c a s e ,   t h e   f i l e   < b > < i > d e v i c e < / i > . h < / b > 
                       m u s t   c o n t a i n   a   v e n d o r - s p e c i f i c   i m p l e m e n t a t i o n   o f   t h i s   f u n c t i o n . 
 
   * / 
 _ _ S T A T I C _ I N L I N E   u i n t 3 2 _ t   T Z _ S y s T i c k _ C o n f i g _ N S ( u i n t 3 2 _ t   t i c k s ) 
 { 
     i f   ( ( t i c k s   -   1 U L )   >   S y s T i c k _ L O A D _ R E L O A D _ M s k ) 
     { 
         r e t u r n   ( 1 U L ) ;                                                                                                                   / *   R e l o a d   v a l u e   i m p o s s i b l e   * / 
     } 
 
     S y s T i c k _ N S - > L O A D     =   ( u i n t 3 2 _ t ) ( t i c k s   -   1 U L ) ;                                                         / *   s e t   r e l o a d   r e g i s t e r   * / 
     T Z _ N V I C _ S e t P r i o r i t y _ N S   ( S y s T i c k _ I R Q n ,   ( 1 U L   < <   _ _ N V I C _ P R I O _ B I T S )   -   1 U L ) ;   / *   s e t   P r i o r i t y   f o r   S y s t i c k   I n t e r r u p t   * / 
     S y s T i c k _ N S - > V A L       =   0 U L ;                                                                                                 / *   L o a d   t h e   S y s T i c k   C o u n t e r   V a l u e   * / 
     S y s T i c k _ N S - > C T R L     =   S y s T i c k _ C T R L _ C L K S O U R C E _ M s k   | 
                                             S y s T i c k _ C T R L _ T I C K I N T _ M s k       | 
                                             S y s T i c k _ C T R L _ E N A B L E _ M s k ;                                                         / *   E n a b l e   S y s T i c k   I R Q   a n d   S y s T i c k   T i m e r   * / 
     r e t u r n   ( 0 U L ) ;                                                                                                                       / *   F u n c t i o n   s u c c e s s f u l   * / 
 } 
 # e n d i f   / *   d e f i n e d   ( _ _ A R M _ F E A T U R E _ C M S E )   & &   ( _ _ A R M _ F E A T U R E _ C M S E   = =   3 U )   * / 
 
 # e n d i f 
 
 / * @ }   e n d   o f   C M S I S _ C o r e _ S y s T i c k F u n c t i o n s   * / 
 
 
 
 
 # i f d e f   _ _ c p l u s p l u s 
 } 
 # e n d i f 
 
 # e n d i f   / *   _ _ C O R E _ C M 2 3 _ H _ D E P E N D A N T   * / 
 
 # e n d i f   / *   _ _ C M S I S _ G E N E R I C   * / 