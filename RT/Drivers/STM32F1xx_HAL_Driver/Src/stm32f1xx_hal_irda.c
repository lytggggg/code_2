??/ * *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ f i l e         s t m 3 2 f 1 x x _ h a l _ i r d a . c  
     *   @ a u t h o r     M C D   A p p l i c a t i o n   T e a m  
     *   @ b r i e f       I R D A   H A L   m o d u l e   d r i v e r .  
     *                     T h i s   f i l e   p r o v i d e s   f i r m w a r e   f u n c t i o n s   t o   m a n a g e   t h e   f o l l o w i n g  
     *                     f u n c t i o n a l i t i e s   o f   t h e   I r D A   S I R   E N D E C   b l o c k   ( I r D A ) :  
     *                       +   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *                       +   I O   o p e r a t i o n   f u n c t i o n s  
     *                       +   P e r i p h e r a l   C o n t r o l   f u n c t i o n s  
     *                       +   P e r i p h e r a l   S t a t e   a n d   E r r o r s   f u n c t i o n s  
     @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                                 # # # # #   H o w   t o   u s e   t h i s   d r i v e r   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h e   I R D A   H A L   d r i v e r   c a n   b e   u s e d   a s   f o l l o w s :  
  
         ( # )   D e c l a r e   a   I R D A _ H a n d l e T y p e D e f   h a n d l e   s t r u c t u r e   ( e g .   I R D A _ H a n d l e T y p e D e f   h i r d a ) .  
         ( # )   I n i t i a l i z e   t h e   I R D A   l o w   l e v e l   r e s o u r c e s   b y   i m p l e m e n t i n g   t h e   H A L _ I R D A _ M s p I n i t ( )   A P I :  
                 ( # # )   E n a b l e   t h e   U S A R T x   i n t e r f a c e   c l o c k .  
                 ( # # )   I R D A   p i n s   c o n f i g u r a t i o n :  
                         ( + + + )   E n a b l e   t h e   c l o c k   f o r   t h e   I R D A   G P I O s .  
                         ( + + + )   C o n f i g u r e   I R D A   p i n s   a s   a l t e r n a t e   f u n c t i o n   p u l l - u p .  
                 ( # # )   N V I C   c o n f i g u r a t i o n   i f   y o u   n e e d   t o   u s e   i n t e r r u p t   p r o c e s s   ( H A L _ I R D A _ T r a n s m i t _ I T ( )  
                           a n d   H A L _ I R D A _ R e c e i v e _ I T ( )   A P I s ) :  
                         ( + + + )   C o n f i g u r e   t h e   U S A R T x   i n t e r r u p t   p r i o r i t y .  
                         ( + + + )   E n a b l e   t h e   N V I C   U S A R T   I R Q   h a n d l e .  
                 ( # # )   D M A   C o n f i g u r a t i o n   i f   y o u   n e e d   t o   u s e   D M A   p r o c e s s   ( H A L _ I R D A _ T r a n s m i t _ D M A ( )  
                           a n d   H A L _ I R D A _ R e c e i v e _ D M A ( )   A P I s ) :  
                         ( + + + )   D e c l a r e   a   D M A   h a n d l e   s t r u c t u r e   f o r   t h e   T x / R x   c h a n n e l .  
                         ( + + + )   E n a b l e   t h e   D M A x   i n t e r f a c e   c l o c k .  
                         ( + + + )   C o n f i g u r e   t h e   d e c l a r e d   D M A   h a n d l e   s t r u c t u r e   w i t h   t h e   r e q u i r e d   T x / R x   p a r a m e t e r s .  
                         ( + + + )   C o n f i g u r e   t h e   D M A   T x / R x   c h a n n e l .  
                         ( + + + )   A s s o c i a t e   t h e   i n i t i a l i z e d   D M A   h a n d l e   t o   t h e   I R D A   D M A   T x / R x   h a n d l e .  
                         ( + + + )   C o n f i g u r e   t h e   p r i o r i t y   a n d   e n a b l e   t h e   N V I C   f o r   t h e   t r a n s f e r   c o m p l e t e   i n t e r r u p t   o n   t h e   D M A   T x / R x   c h a n n e l .  
                         ( + + + )   C o n f i g u r e   t h e   I R D A x   i n t e r r u p t   p r i o r i t y   a n d   e n a b l e   t h e   N V I C   U S A R T   I R Q   h a n d l e  
                                     ( u s e d   f o r   l a s t   b y t e   s e n d i n g   c o m p l e t i o n   d e t e c t i o n   i n   D M A   n o n   c i r c u l a r   m o d e )  
  
         ( # )   P r o g r a m   t h e   B a u d   R a t e ,   W o r d   L e n g t h ,   P a r i t y ,   I r D A   M o d e ,   P r e s c a l e r  
                 a n d   M o d e ( R e c e i v e r / T r a n s m i t t e r )   i n   t h e   h i r d a   I n i t   s t r u c t u r e .  
  
         ( # )   I n i t i a l i z e   t h e   I R D A   r e g i s t e r s   b y   c a l l i n g   t h e   H A L _ I R D A _ I n i t ( )   A P I :  
                 ( + + )   T h i s   A P I   c o n f i g u r e s   a l s o   t h e   l o w   l e v e l   H a r d w a r e   G P I O ,   C L O C K ,   C O R T E X . . . e t c )  
                           b y   c a l l i n g   t h e   c u s t o m i z e d   H A L _ I R D A _ M s p I n i t ( )   A P I .  
  
                   - @ @ -   T h e   s p e c i f i c   I R D A   i n t e r r u p t s   ( T r a n s m i s s i o n   c o m p l e t e   i n t e r r u p t ,  
                           R X N E   i n t e r r u p t   a n d   E r r o r   I n t e r r u p t s )   w i l l   b e   m a n a g e d   u s i n g   t h e   m a c r o s  
                           _ _ H A L _ I R D A _ E N A B L E _ I T ( )   a n d   _ _ H A L _ I R D A _ D I S A B L E _ I T ( )   i n s i d e   t h e   t r a n s m i t   a n d   r e c e i v e   p r o c e s s .  
  
         ( # )   T h r e e   o p e r a t i o n   m o d e s   a r e   a v a i l a b l e   w i t h i n   t h i s   d r i v e r   :  
  
         * * *   P o l l i n g   m o d e   I O   o p e r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( + )   S e n d   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e   u s i n g   H A L _ I R D A _ T r a n s m i t ( )  
             ( + )   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e   u s i n g   H A L _ I R D A _ R e c e i v e ( )  
  
         * * *   I n t e r r u p t   m o d e   I O   o p e r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( + )   S e n d   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e   u s i n g   H A L _ I R D A _ T r a n s m i t _ I T ( )  
             ( + )   A t   t r a n s m i s s i o n   e n d   o f   t r a n s f e r   H A L _ I R D A _ T x C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ I R D A _ T x C p l t C a l l b a c k  
             ( + )   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e   u s i n g   H A L _ I R D A _ R e c e i v e _ I T ( )  
             ( + )   A t   r e c e p t i o n   e n d   o f   t r a n s f e r   H A L _ I R D A _ R x C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ I R D A _ R x C p l t C a l l b a c k  
             ( + )   I n   c a s e   o f   t r a n s f e r   E r r o r ,   H A L _ I R D A _ E r r o r C a l l b a c k ( )   f u n c t i o n   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ I R D A _ E r r o r C a l l b a c k  
  
         * * *   D M A   m o d e   I O   o p e r a t i o n   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             ( + )   S e n d   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e   ( D M A )   u s i n g   H A L _ I R D A _ T r a n s m i t _ D M A ( )  
             ( + )   A t   t r a n s m i s s i o n   e n d   o f   h a l f   t r a n s f e r   H A L _ I R D A _ T x H a l f C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                         a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ I R D A _ T x H a l f C p l t C a l l b a c k  
             ( + )   A t   t r a n s m i s s i o n   e n d   o f   t r a n s f e r   H A L _ I R D A _ T x C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ I R D A _ T x C p l t C a l l b a c k  
             ( + )   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e   ( D M A )   u s i n g   H A L _ I R D A _ R e c e i v e _ D M A ( )  
             ( + )   A t   r e c e p t i o n   e n d   o f   h a l f   t r a n s f e r   H A L _ I R D A _ R x H a l f C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                         a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ I R D A _ R x H a l f C p l t C a l l b a c k  
             ( + )   A t   r e c e p t i o n   e n d   o f   t r a n s f e r   H A L _ I R D A _ R x C p l t C a l l b a c k   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ I R D A _ R x C p l t C a l l b a c k  
             ( + )   I n   c a s e   o f   t r a n s f e r   E r r o r ,   H A L _ I R D A _ E r r o r C a l l b a c k ( )   f u n c t i o n   i s   e x e c u t e d   a n d   u s e r   c a n  
                       a d d   h i s   o w n   c o d e   b y   c u s t o m i z a t i o n   o f   f u n c t i o n   p o i n t e r   H A L _ I R D A _ E r r o r C a l l b a c k  
             ( + )   P a u s e   t h e   D M A   T r a n s f e r   u s i n g   H A L _ I R D A _ D M A P a u s e ( )  
             ( + )   R e s u m e   t h e   D M A   T r a n s f e r   u s i n g   H A L _ I R D A _ D M A R e s u m e ( )  
             ( + )   S t o p   t h e   D M A   T r a n s f e r   u s i n g   H A L _ I R D A _ D M A S t o p ( )  
  
         * * *   I R D A   H A L   d r i v e r   m a c r o s   l i s t   * * *  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
             B e l o w   t h e   l i s t   o f   m o s t   u s e d   m a c r o s   i n   I R D A   H A L   d r i v e r .  
  
               ( + )   _ _ H A L _ I R D A _ E N A B L E :   E n a b l e   t h e   I R D A   p e r i p h e r a l  
               ( + )   _ _ H A L _ I R D A _ D I S A B L E :   D i s a b l e   t h e   I R D A   p e r i p h e r a l  
               ( + )   _ _ H A L _ I R D A _ G E T _ F L A G   :   C h e c k   w h e t h e r   t h e   s p e c i f i e d   I R D A   f l a g   i s   s e t   o r   n o t  
               ( + )   _ _ H A L _ I R D A _ C L E A R _ F L A G   :   C l e a r   t h e   s p e c i f i e d   I R D A   p e n d i n g   f l a g  
               ( + )   _ _ H A L _ I R D A _ E N A B L E _ I T :   E n a b l e   t h e   s p e c i f i e d   I R D A   i n t e r r u p t  
               ( + )   _ _ H A L _ I R D A _ D I S A B L E _ I T :   D i s a b l e   t h e   s p e c i f i e d   I R D A   i n t e r r u p t  
               ( + )   _ _ H A L _ I R D A _ G E T _ I T _ S O U R C E :   C h e c k   w h e t h e r   t h e   s p e c i f i e d   I R D A   i n t e r r u p t   h a s   o c c u r r e d   o r   n o t  
  
         [ . . ]  
           ( @ )   Y o u   c a n   r e f e r   t o   t h e   I R D A   H A L   d r i v e r   h e a d e r   f i l e   f o r   m o r e   u s e f u l   m a c r o s  
  
         # # # # #   C a l l b a c k   r e g i s t r a t i o n   # # # # #  
         = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
  
         [ . . ]  
             T h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   w h e n   s e t   t o   1  
             a l l o w s   t h e   u s e r   t o   c o n f i g u r e   d y n a m i c a l l y   t h e   d r i v e r   c a l l b a c k s .  
  
         [ . . ]  
             U s e   F u n c t i o n   @ r e f   H A L _ I R D A _ R e g i s t e r C a l l b a c k ( )   t o   r e g i s t e r   a   u s e r   c a l l b a c k .  
             F u n c t i o n   @ r e f   H A L _ I R D A _ R e g i s t e r C a l l b a c k ( )   a l l o w s   t o   r e g i s t e r   f o l l o w i n g   c a l l b a c k s :  
               ( + )   T x H a l f C p l t C a l l b a c k                 :   T x   H a l f   C o m p l e t e   C a l l b a c k .  
               ( + )   T x C p l t C a l l b a c k                         :   T x   C o m p l e t e   C a l l b a c k .  
               ( + )   R x H a l f C p l t C a l l b a c k                 :   R x   H a l f   C o m p l e t e   C a l l b a c k .  
               ( + )   R x C p l t C a l l b a c k                         :   R x   C o m p l e t e   C a l l b a c k .  
               ( + )   E r r o r C a l l b a c k                           :   E r r o r   C a l l b a c k .  
               ( + )   A b o r t C p l t C a l l b a c k                   :   A b o r t   C o m p l e t e   C a l l b a c k .  
               ( + )   A b o r t T r a n s m i t C p l t C a l l b a c k   :   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k .  
               ( + )   A b o r t R e c e i v e C p l t C a l l b a c k     :   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k .  
               ( + )   M s p I n i t C a l l b a c k                       :   I R D A   M s p I n i t .  
               ( + )   M s p D e I n i t C a l l b a c k                   :   I R D A   M s p D e I n i t .  
             T h i s   f u n c t i o n   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,   t h e   C a l l b a c k   I D  
             a n d   a   p o i n t e r   t o   t h e   u s e r   c a l l b a c k   f u n c t i o n .  
  
         [ . . ]  
             U s e   f u n c t i o n   @ r e f   H A L _ I R D A _ U n R e g i s t e r C a l l b a c k ( )   t o   r e s e t   a   c a l l b a c k   t o   t h e   d e f a u l t  
             w e a k   ( s u r c h a r g e d )   f u n c t i o n .  
             @ r e f   H A L _ I R D A _ U n R e g i s t e r C a l l b a c k ( )   t a k e s   a s   p a r a m e t e r s   t h e   H A L   p e r i p h e r a l   h a n d l e ,  
             a n d   t h e   C a l l b a c k   I D .  
             T h i s   f u n c t i o n   a l l o w s   t o   r e s e t   f o l l o w i n g   c a l l b a c k s :  
               ( + )   T x H a l f C p l t C a l l b a c k                 :   T x   H a l f   C o m p l e t e   C a l l b a c k .  
               ( + )   T x C p l t C a l l b a c k                         :   T x   C o m p l e t e   C a l l b a c k .  
               ( + )   R x H a l f C p l t C a l l b a c k                 :   R x   H a l f   C o m p l e t e   C a l l b a c k .  
               ( + )   R x C p l t C a l l b a c k                         :   R x   C o m p l e t e   C a l l b a c k .  
               ( + )   E r r o r C a l l b a c k                           :   E r r o r   C a l l b a c k .  
               ( + )   A b o r t C p l t C a l l b a c k                   :   A b o r t   C o m p l e t e   C a l l b a c k .  
               ( + )   A b o r t T r a n s m i t C p l t C a l l b a c k   :   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k .  
               ( + )   A b o r t R e c e i v e C p l t C a l l b a c k     :   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k .  
               ( + )   M s p I n i t C a l l b a c k                       :   I R D A   M s p I n i t .  
               ( + )   M s p D e I n i t C a l l b a c k                   :   I R D A   M s p D e I n i t .  
  
         [ . . ]  
             B y   d e f a u l t ,   a f t e r   t h e   @ r e f   H A L _ I R D A _ I n i t ( )   a n d   w h e n   t h e   s t a t e   i s   H A L _ I R D A _ S T A T E _ R E S E T  
             a l l   c a l l b a c k s   a r e   s e t   t o   t h e   c o r r e s p o n d i n g   w e a k   ( s u r c h a r g e d )   f u n c t i o n s :  
             e x a m p l e s   @ r e f   H A L _ I R D A _ T x C p l t C a l l b a c k ( ) ,   @ r e f   H A L _ I R D A _ R x H a l f C p l t C a l l b a c k ( ) .  
             E x c e p t i o n   d o n e   f o r   M s p I n i t   a n d   M s p D e I n i t   f u n c t i o n s   t h a t   a r e   r e s p e c t i v e l y  
             r e s e t   t o   t h e   l e g a c y   w e a k   ( s u r c h a r g e d )   f u n c t i o n s   i n   t h e   @ r e f   H A L _ I R D A _ I n i t ( )  
             a n d   @ r e f   H A L _ I R D A _ D e I n i t ( )   o n l y   w h e n   t h e s e   c a l l b a c k s   a r e   n u l l   ( n o t   r e g i s t e r e d   b e f o r e h a n d ) .  
             I f   n o t ,   M s p I n i t   o r   M s p D e I n i t   a r e   n o t   n u l l ,   t h e   @ r e f   H A L _ I R D A _ I n i t ( )   a n d   @ r e f   H A L _ I R D A _ D e I n i t ( )  
             k e e p   a n d   u s e   t h e   u s e r   M s p I n i t / M s p D e I n i t   c a l l b a c k s   ( r e g i s t e r e d   b e f o r e h a n d ) .  
  
         [ . . ]  
             C a l l b a c k s   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d   i n   H A L _ I R D A _ S T A T E _ R E A D Y   s t a t e   o n l y .  
             E x c e p t i o n   d o n e   M s p I n i t / M s p D e I n i t   t h a t   c a n   b e   r e g i s t e r e d / u n r e g i s t e r e d  
             i n   H A L _ I R D A _ S T A T E _ R E A D Y   o r   H A L _ I R D A _ S T A T E _ R E S E T   s t a t e ,   t h u s   r e g i s t e r e d   ( u s e r )  
             M s p I n i t / D e I n i t   c a l l b a c k s   c a n   b e   u s e d   d u r i n g   t h e   I n i t / D e I n i t .  
             I n   t h a t   c a s e   f i r s t   r e g i s t e r   t h e   M s p I n i t / M s p D e I n i t   u s e r   c a l l b a c k s  
             u s i n g   @ r e f   H A L _ I R D A _ R e g i s t e r C a l l b a c k ( )   b e f o r e   c a l l i n g   @ r e f   H A L _ I R D A _ D e I n i t ( )  
             o r   @ r e f   H A L _ I R D A _ I n i t ( )   f u n c t i o n .  
  
         [ . . ]  
             W h e n   T h e   c o m p i l a t i o n   d e f i n e   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   i s   s e t   t o   0   o r  
             n o t   d e f i n e d ,   t h e   c a l l b a c k   r e g i s t r a t i o n   f e a t u r e   i s   n o t   a v a i l a b l e  
             a n d   w e a k   ( s u r c h a r g e d )   c a l l b a c k s   a r e   u s e d .  
  
     @ e n d v e r b a t i m  
           [ . . ]  
               ( @ )   A d d i t i o n a l   r e m a r k :   I f   t h e   p a r i t y   i s   e n a b l e d ,   t h e n   t h e   M S B   b i t   o f   t h e   d a t a   w r i t t e n  
                       i n   t h e   d a t a   r e g i s t e r   i s   t r a n s m i t t e d   b u t   i s   c h a n g e d   b y   t h e   p a r i t y   b i t .  
                       D e p e n d i n g   o n   t h e   f r a m e   l e n g t h   d e f i n e d   b y   t h e   M   b i t   ( 8 - b i t s   o r   9 - b i t s ) ,  
                       t h e   p o s s i b l e   I R D A   f r a m e   f o r m a t s   a r e   a s   l i s t e d   i n   t h e   f o l l o w i n g   t a b l e :  
         + - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - +  
         |       M   b i t   |     P C E   b i t     |                         I R D A   f r a m e                                   |  
         | - - - - - - - - - - - - - - - - - - - - - | - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |  
         |         0         |         0             |         |   S B   |   8   b i t   d a t a   |   1   S T B   |                 |  
         | - - - - - - - - - | - - - - - - - - - - - | - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |  
         |         0         |         1             |         |   S B   |   7   b i t   d a t a   |   P B   |   1   S T B   |       |  
         | - - - - - - - - - | - - - - - - - - - - - | - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |  
         |         1         |         0             |         |   S B   |   9   b i t   d a t a   |   1   S T B   |                 |  
         | - - - - - - - - - | - - - - - - - - - - - | - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |  
         |         1         |         1             |         |   S B   |   8   b i t   d a t a   |   P B   |   1   S T B   |       |  
         + - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - +  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     *   @ a t t e n t i o n  
     *  
     *   < h 2 > < c e n t e r > & c o p y ;   C o p y r i g h t   ( c )   2 0 1 6   S T M i c r o e l e c t r o n i c s .  
     *   A l l   r i g h t s   r e s e r v e d . < / c e n t e r > < / h 2 >  
     *  
     *   T h i s   s o f t w a r e   c o m p o n e n t   i s   l i c e n s e d   b y   S T   u n d e r   B S D   3 - C l a u s e   l i c e n s e ,  
     *   t h e   " L i c e n s e " ;   Y o u   m a y   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e  
     *   L i c e n s e .   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t :  
     *                                                 o p e n s o u r c e . o r g / l i c e n s e s / B S D - 3 - C l a u s e  
     *  
     * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  
     * /  
  
 / *   I n c l u d e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 # i n c l u d e   " s t m 3 2 f 1 x x _ h a l . h "  
  
 / * *   @ a d d t o g r o u p   S T M 3 2 F 1 x x _ H A L _ D r i v e r  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   I R D A   I R D A  
     *   @ b r i e f   H A L   I R D A   m o d u l e   d r i v e r  
     *   @ {  
     * /  
  
 # i f d e f   H A L _ I R D A _ M O D U L E _ E N A B L E D  
  
 / *   P r i v a t e   t y p e d e f   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   d e f i n e   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   c o n s t a n t s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   m a c r o   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   v a r i a b l e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / *   P r i v a t e   f u n c t i o n   p r o t o t y p e s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ a d d t o g r o u p   I R D A _ P r i v a t e _ F u n c t i o n s  
     *   @ {  
     * /  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 v o i d   I R D A _ I n i t C a l l b a c k s T o D e f a u l t ( I R D A _ H a n d l e T y p e D e f   * h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   * /  
 s t a t i c   v o i d   I R D A _ S e t C o n f i g ( I R D A _ H a n d l e T y p e D e f   * h i r d a ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I R D A _ T r a n s m i t _ I T ( I R D A _ H a n d l e T y p e D e f   * h i r d a ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I R D A _ E n d T r a n s m i t _ I T ( I R D A _ H a n d l e T y p e D e f   * h i r d a ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I R D A _ R e c e i v e _ I T ( I R D A _ H a n d l e T y p e D e f   * h i r d a ) ;  
 s t a t i c   v o i d   I R D A _ D M A T r a n s m i t C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   I R D A _ D M A T r a n s m i t H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   I R D A _ D M A R e c e i v e C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   I R D A _ D M A R e c e i v e H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   I R D A _ D M A E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   I R D A _ D M A A b o r t O n E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   I R D A _ D M A T x A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   I R D A _ D M A R x A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   I R D A _ D M A T x O n l y A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   v o i d   I R D A _ D M A R x O n l y A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a ) ;  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I R D A _ W a i t O n F l a g U n t i l T i m e o u t ( I R D A _ H a n d l e T y p e D e f   * h i r d a ,   u i n t 3 2 _ t   F l a g ,   F l a g S t a t u s   S t a t u s ,   u i n t 3 2 _ t   T i c k s t a r t ,   u i n t 3 2 _ t   T i m e o u t ) ;  
 s t a t i c   v o i d   I R D A _ E n d T x T r a n s f e r ( I R D A _ H a n d l e T y p e D e f   * h i r d a ) ;  
 s t a t i c   v o i d   I R D A _ E n d R x T r a n s f e r ( I R D A _ H a n d l e T y p e D e f   * h i r d a ) ;  
 / * *  
     *   @ }  
     * /  
  
 / *   E x p o r t e d   f u n c t i o n s   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
 / * *   @ d e f g r o u p   I R D A _ E x p o r t e d _ F u n c t i o n s   I r D A   E x p o r t e d   F u n c t i o n s  
     *   @ {  
     * /  
  
 / * *   @ d e f g r o u p   I R D A _ E x p o r t e d _ F u n c t i o n s _ G r o u p 1   I r D A   I n i t i a l i z a t i o n   a n d   d e - i n i t i a l i z a t i o n   f u n c t i o n s  
     *     @ b r i e f         I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s  
     *  
 @ v e r b a t i m  
  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                         # # # # #   I n i t i a l i z a t i o n   a n d   C o n f i g u r a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   i n i t i a l i z e   t h e   U S A R T x   o r   t h e   U A R T y  
         i n   a s y n c h r o n o u s   I r D A   m o d e .  
             ( + )   F o r   t h e   a s y n c h r o n o u s   m o d e   o n l y   t h e s e   p a r a m e t e r s   c a n   b e   c o n f i g u r e d :  
                 ( + + )   B a u d R a t e  
                 ( + + )   W o r d L e n g t h  
                 ( + + )   P a r i t y :   I f   t h e   p a r i t y   i s   e n a b l e d ,   t h e n   t h e   M S B   b i t   o f   t h e   d a t a   w r i t t e n  
                           i n   t h e   d a t a   r e g i s t e r   i s   t r a n s m i t t e d   b u t   i s   c h a n g e d   b y   t h e   p a r i t y   b i t .  
                           D e p e n d i n g   o n   t h e   f r a m e   l e n g t h   d e f i n e d   b y   t h e   M   b i t   ( 8 - b i t s   o r   9 - b i t s ) ,  
                           p l e a s e   r e f e r   t o   R e f e r e n c e   m a n u a l   f o r   p o s s i b l e   I R D A   f r a m e   f o r m a t s .  
                 ( + + )   P r e s c a l e r :   A   p u l s e   o f   w i d t h   l e s s   t h a n   t w o   a n d   g r e a t e r   t h a n   o n e   P S C   p e r i o d ( s )   m a y   o r   m a y  
                           n o t   b e   r e j e c t e d .   T h e   r e c e i v e r   s e t   u p   t i m e   s h o u l d   b e   m a n a g e d   b y   s o f t w a r e .   T h e   I r D A   p h y s i c a l   l a y e r  
                           s p e c i f i c a t i o n   s p e c i f i e s   a   m i n i m u m   o f   1 0   m s   d e l a y   b e t w e e n   t r a n s m i s s i o n   a n d  
                           r e c e p t i o n   ( I r D A   i s   a   h a l f   d u p l e x   p r o t o c o l ) .  
                 ( + + )   M o d e :   R e c e i v e r / t r a n s m i t t e r   m o d e s  
                 ( + + )   I r D A M o d e :   t h e   I r D A   c a n   o p e r a t e   i n   t h e   N o r m a l   m o d e   o r   i n   t h e   L o w   p o w e r   m o d e .  
         [ . . ]  
         T h e   H A L _ I R D A _ I n i t ( )   A P I   f o l l o w s   I R D A   c o n f i g u r a t i o n   p r o c e d u r e s   ( d e t a i l s   f o r   t h e   p r o c e d u r e s  
         a r e   a v a i l a b l e   i n   r e f e r e n c e   m a n u a l ) .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     I n i t i a l i z e s   t h e   I R D A   m o d e   a c c o r d i n g   t o   t h e   s p e c i f i e d  
     *                   p a r a m e t e r s   i n   t h e   I R D A _ I n i t T y p e D e f   a n d   c r e a t e   t h e   a s s o c i a t e d   h a n d l e .  
     *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I R D A _ I n i t ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   C h e c k   t h e   I R D A   h a n d l e   a l l o c a t i o n   * /  
     i f   ( h i r d a   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   I R D A   i n s t a n c e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I R D A _ I N S T A N C E ( h i r d a - > I n s t a n c e ) ) ;  
     / *   C h e c k   t h e   I R D A   m o d e   p a r a m e t e r   i n   t h e   I R D A   h a n d l e   * /  
     a s s e r t _ p a r a m ( I S _ I R D A _ P O W E R M O D E ( h i r d a - > I n i t . I r D A M o d e ) ) ;  
  
     i f   ( h i r d a - > g S t a t e   = =   H A L _ I R D A _ S T A T E _ R E S E T )  
     {  
         / *   A l l o c a t e   l o c k   r e s o u r c e   a n d   i n i t i a l i z e   i t   * /  
         h i r d a - > L o c k   =   H A L _ U N L O C K E D ;  
  
 # i f   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1  
         I R D A _ I n i t C a l l b a c k s T o D e f a u l t ( h i r d a ) ;  
  
         i f   ( h i r d a - > M s p I n i t C a l l b a c k   = =   N U L L )  
         {  
             h i r d a - > M s p I n i t C a l l b a c k   =   H A L _ I R D A _ M s p I n i t ;  
         }  
  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
         h i r d a - > M s p I n i t C a l l b a c k ( h i r d a ) ;  
 # e l s e  
         / *   I n i t   t h e   l o w   l e v e l   h a r d w a r e   :   G P I O ,   C L O C K   * /  
         H A L _ I R D A _ M s p I n i t ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   * /  
     }  
  
     h i r d a - > g S t a t e   =   H A L _ I R D A _ S T A T E _ B U S Y ;  
  
     / *   D i s a b l e   t h e   I R D A   p e r i p h e r a l   * /  
     _ _ H A L _ I R D A _ D I S A B L E ( h i r d a ) ;  
  
     / *   S e t   t h e   I R D A   c o m m u n i c a t i o n   p a r a m e t e r s   * /  
     I R D A _ S e t C o n f i g ( h i r d a ) ;  
  
     / *   I n   I r D A   m o d e ,   t h e   f o l l o w i n g   b i t s   m u s t   b e   k e p t   c l e a r e d :  
     -   L I N E N ,   S T O P   a n d   C L K E N   b i t s   i n   t h e   U S A R T _ C R 2   r e g i s t e r ,  
     -   S C E N   a n d   H D S E L   b i t s   i n   t h e   U S A R T _ C R 3   r e g i s t e r . * /  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 2 ,   ( U S A R T _ C R 2 _ L I N E N   |   U S A R T _ C R 2 _ S T O P   |   U S A R T _ C R 2 _ C L K E N ) ) ;  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   ( U S A R T _ C R 3 _ S C E N   |   U S A R T _ C R 3 _ H D S E L ) ) ;  
  
     / *   E n a b l e   t h e   I R D A   p e r i p h e r a l   * /  
     _ _ H A L _ I R D A _ E N A B L E ( h i r d a ) ;  
  
     / *   S e t   t h e   p r e s c a l e r   * /  
     M O D I F Y _ R E G ( h i r d a - > I n s t a n c e - > G T P R ,   U S A R T _ G T P R _ P S C ,   h i r d a - > I n i t . P r e s c a l e r ) ;  
  
     / *   C o n f i g u r e   t h e   I r D A   m o d e   * /  
     M O D I F Y _ R E G ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ I R L P ,   h i r d a - > I n i t . I r D A M o d e ) ;  
  
     / *   E n a b l e   t h e   I r D A   m o d e   b y   s e t t i n g   t h e   I R E N   b i t   i n   t h e   C R 3   r e g i s t e r   * /  
     S E T _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ I R E N ) ;  
  
     / *   I n i t i a l i z e   t h e   I R D A   s t a t e * /  
     h i r d a - > E r r o r C o d e   =   H A L _ I R D A _ E R R O R _ N O N E ;  
     h i r d a - > g S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
     h i r d a - > R x S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     D e I n i t i a l i z e s   t h e   I R D A   p e r i p h e r a l  
     *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I R D A _ D e I n i t ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   C h e c k   t h e   I R D A   h a n d l e   a l l o c a t i o n   * /  
     i f   ( h i r d a   = =   N U L L )  
     {  
         r e t u r n   H A L _ E R R O R ;  
     }  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I R D A _ I N S T A N C E ( h i r d a - > I n s t a n c e ) ) ;  
  
     h i r d a - > g S t a t e   =   H A L _ I R D A _ S T A T E _ B U S Y ;  
  
     / *   D i s a b l e   t h e   P e r i p h e r a l   * /  
     _ _ H A L _ I R D A _ D I S A B L E ( h i r d a ) ;  
  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
 # i f   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1  
     i f   ( h i r d a - > M s p D e I n i t C a l l b a c k   = =   N U L L )  
     {  
         h i r d a - > M s p D e I n i t C a l l b a c k   =   H A L _ I R D A _ M s p D e I n i t ;  
     }  
     / *   D e I n i t   t h e   l o w   l e v e l   h a r d w a r e   * /  
     h i r d a - > M s p D e I n i t C a l l b a c k ( h i r d a ) ;  
 # e l s e  
     H A L _ I R D A _ M s p D e I n i t ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   * /  
  
     h i r d a - > E r r o r C o d e   =   H A L _ I R D A _ E R R O R _ N O N E ;  
  
     h i r d a - > g S t a t e   =   H A L _ I R D A _ S T A T E _ R E S E T ;  
     h i r d a - > R x S t a t e   =   H A L _ I R D A _ S T A T E _ R E S E T ;  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h i r d a ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     I R D A   M S P   I n i t .  
     *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I R D A _ M s p I n i t ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i r d a ) ;  
  
     / *   N O T E :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                       t h e   H A L _ I R D A _ M s p I n i t   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     I R D A   M S P   D e I n i t .  
     *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I R D A _ M s p D e I n i t ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i r d a ) ;  
  
     / *   N O T E :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                       t h e   H A L _ I R D A _ M s p D e I n i t   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e  
       * /  
 }  
  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     R e g i s t e r   a   U s e r   I R D A   C a l l b a c k  
     *                   T o   b e   u s e d   i n s t e a d   o f   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h i r d a   i r d a   h a n d l e  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                       @ a r g   @ r e f   H A L _ I R D A _ T X _ H A L F C O M P L E T E _ C B _ I D   T x   H a l f   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ I R D A _ T X _ C O M P L E T E _ C B _ I D   T x   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ I R D A _ R X _ H A L F C O M P L E T E _ C B _ I D   R x   H a l f   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ I R D A _ R X _ C O M P L E T E _ C B _ I D   R x   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ I R D A _ E R R O R _ C B _ I D   E r r o r   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ I R D A _ A B O R T _ C O M P L E T E _ C B _ I D   A b o r t   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ I R D A _ A B O R T _ T R A N S M I T _ C O M P L E T E _ C B _ I D   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ I R D A _ A B O R T _ R E C E I V E _ C O M P L E T E _ C B _ I D   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ I R D A _ M S P I N I T _ C B _ I D   M s p I n i t   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ I R D A _ M S P D E I N I T _ C B _ I D   M s p D e I n i t   C a l l b a c k   I D  
     *   @ p a r a m     p C a l l b a c k   p o i n t e r   t o   t h e   C a l l b a c k   f u n c t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I R D A _ R e g i s t e r C a l l b a c k ( I R D A _ H a n d l e T y p e D e f   * h i r d a ,   H A L _ I R D A _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D ,   p I R D A _ C a l l b a c k T y p e D e f   p C a l l b a c k )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     i f   ( p C a l l b a c k   = =   N U L L )  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h i r d a - > E r r o r C o d e   | =   H A L _ I R D A _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         r e t u r n   H A L _ E R R O R ;  
     }  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h i r d a ) ;  
  
     i f   ( h i r d a - > g S t a t e   = =   H A L _ I R D A _ S T A T E _ R E A D Y )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ I R D A _ T X _ H A L F C O M P L E T E _ C B _ I D   :  
                 h i r d a - > T x H a l f C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ T X _ C O M P L E T E _ C B _ I D   :  
                 h i r d a - > T x C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ R X _ H A L F C O M P L E T E _ C B _ I D   :  
                 h i r d a - > R x H a l f C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ R X _ C O M P L E T E _ C B _ I D   :  
                 h i r d a - > R x C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ E R R O R _ C B _ I D   :  
                 h i r d a - > E r r o r C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ A B O R T _ C O M P L E T E _ C B _ I D   :  
                 h i r d a - > A b o r t C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ A B O R T _ T R A N S M I T _ C O M P L E T E _ C B _ I D   :  
                 h i r d a - > A b o r t T r a n s m i t C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ A B O R T _ R E C E I V E _ C O M P L E T E _ C B _ I D   :  
                 h i r d a - > A b o r t R e c e i v e C p l t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ M S P I N I T _ C B _ I D   :  
                 h i r d a - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ M S P D E I N I T _ C B _ I D   :  
                 h i r d a - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h i r d a - > E r r o r C o d e   | =   H A L _ I R D A _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( h i r d a - > g S t a t e   = =   H A L _ I R D A _ S T A T E _ R E S E T )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ I R D A _ M S P I N I T _ C B _ I D   :  
                 h i r d a - > M s p I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ M S P D E I N I T _ C B _ I D   :  
                 h i r d a - > M s p D e I n i t C a l l b a c k   =   p C a l l b a c k ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h i r d a - > E r r o r C o d e   | =   H A L _ I R D A _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h i r d a - > E r r o r C o d e   | =   H A L _ I R D A _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h i r d a ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
  
 / * *  
     *   @ b r i e f     U n r e g i s t e r   a n   I R D A   c a l l b a c k  
     *                   I R D A   c a l l b a c k   i s   r e d i r e c t e d   t o   t h e   w e a k   p r e d e f i n e d   c a l l b a c k  
     *   @ p a r a m     h i r d a   i r d a   h a n d l e  
     *   @ p a r a m     C a l l b a c k I D   I D   o f   t h e   c a l l b a c k   t o   b e   u n r e g i s t e r e d  
     *                   T h i s   p a r a m e t e r   c a n   b e   o n e   o f   t h e   f o l l o w i n g   v a l u e s :  
     *                       @ a r g   @ r e f   H A L _ I R D A _ T X _ H A L F C O M P L E T E _ C B _ I D   T x   H a l f   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ I R D A _ T X _ C O M P L E T E _ C B _ I D   T x   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ I R D A _ R X _ H A L F C O M P L E T E _ C B _ I D   R x   H a l f   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ I R D A _ R X _ C O M P L E T E _ C B _ I D   R x   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ I R D A _ E R R O R _ C B _ I D   E r r o r   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ I R D A _ A B O R T _ C O M P L E T E _ C B _ I D   A b o r t   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ I R D A _ A B O R T _ T R A N S M I T _ C O M P L E T E _ C B _ I D   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ I R D A _ A B O R T _ R E C E I V E _ C O M P L E T E _ C B _ I D   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ I R D A _ M S P I N I T _ C B _ I D   M s p I n i t   C a l l b a c k   I D  
     *                       @ a r g   @ r e f   H A L _ I R D A _ M S P D E I N I T _ C B _ I D   M s p D e I n i t   C a l l b a c k   I D  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I R D A _ U n R e g i s t e r C a l l b a c k ( I R D A _ H a n d l e T y p e D e f   * h i r d a ,   H A L _ I R D A _ C a l l b a c k I D T y p e D e f   C a l l b a c k I D )  
 {  
     H A L _ S t a t u s T y p e D e f   s t a t u s   =   H A L _ O K ;  
  
     / *   P r o c e s s   l o c k e d   * /  
     _ _ H A L _ L O C K ( h i r d a ) ;  
  
     i f   ( H A L _ I R D A _ S T A T E _ R E A D Y   = =   h i r d a - > g S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ I R D A _ T X _ H A L F C O M P L E T E _ C B _ I D   :  
                 h i r d a - > T x H a l f C p l t C a l l b a c k   =   H A L _ I R D A _ T x H a l f C p l t C a l l b a c k ;                               / *   L e g a c y   w e a k     T x H a l f C p l t C a l l b a c k               * /  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ T X _ C O M P L E T E _ C B _ I D   :  
                 h i r d a - > T x C p l t C a l l b a c k   =   H A L _ I R D A _ T x C p l t C a l l b a c k ;                                               / *   L e g a c y   w e a k   T x C p l t C a l l b a c k                         * /  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ R X _ H A L F C O M P L E T E _ C B _ I D   :  
                 h i r d a - > R x H a l f C p l t C a l l b a c k   =   H A L _ I R D A _ R x H a l f C p l t C a l l b a c k ;                               / *   L e g a c y   w e a k   R x H a l f C p l t C a l l b a c k                 * /  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ R X _ C O M P L E T E _ C B _ I D   :  
                 h i r d a - > R x C p l t C a l l b a c k   =   H A L _ I R D A _ R x C p l t C a l l b a c k ;                                               / *   L e g a c y   w e a k   R x C p l t C a l l b a c k                         * /  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ E R R O R _ C B _ I D   :  
                 h i r d a - > E r r o r C a l l b a c k   =   H A L _ I R D A _ E r r o r C a l l b a c k ;                                                   / *   L e g a c y   w e a k   E r r o r C a l l b a c k                           * /  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ A B O R T _ C O M P L E T E _ C B _ I D   :  
                 h i r d a - > A b o r t C p l t C a l l b a c k   =   H A L _ I R D A _ A b o r t C p l t C a l l b a c k ;                                   / *   L e g a c y   w e a k   A b o r t C p l t C a l l b a c k                   * /  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ A B O R T _ T R A N S M I T _ C O M P L E T E _ C B _ I D   :  
                 h i r d a - > A b o r t T r a n s m i t C p l t C a l l b a c k   =   H A L _ I R D A _ A b o r t T r a n s m i t C p l t C a l l b a c k ;   / *   L e g a c y   w e a k   A b o r t T r a n s m i t C p l t C a l l b a c k   * /  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ A B O R T _ R E C E I V E _ C O M P L E T E _ C B _ I D   :  
                 h i r d a - > A b o r t R e c e i v e C p l t C a l l b a c k   =   H A L _ I R D A _ A b o r t R e c e i v e C p l t C a l l b a c k ;       / *   L e g a c y   w e a k   A b o r t R e c e i v e C p l t C a l l b a c k     * /  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ M S P I N I T _ C B _ I D   :  
                 h i r d a - > M s p I n i t C a l l b a c k   =   H A L _ I R D A _ M s p I n i t ;                                                           / *   L e g a c y   w e a k   M s p I n i t C a l l b a c k                       * /  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ M S P D E I N I T _ C B _ I D   :  
                 h i r d a - > M s p D e I n i t C a l l b a c k   =   H A L _ I R D A _ M s p D e I n i t ;                                                   / *   L e g a c y   w e a k   M s p D e I n i t C a l l b a c k                   * /  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h i r d a - > E r r o r C o d e   | =   H A L _ I R D A _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e   i f   ( H A L _ I R D A _ S T A T E _ R E S E T   = =   h i r d a - > g S t a t e )  
     {  
         s w i t c h   ( C a l l b a c k I D )  
         {  
             c a s e   H A L _ I R D A _ M S P I N I T _ C B _ I D   :  
                 h i r d a - > M s p I n i t C a l l b a c k   =   H A L _ I R D A _ M s p I n i t ;  
                 b r e a k ;  
  
             c a s e   H A L _ I R D A _ M S P D E I N I T _ C B _ I D   :  
                 h i r d a - > M s p D e I n i t C a l l b a c k   =   H A L _ I R D A _ M s p D e I n i t ;  
                 b r e a k ;  
  
             d e f a u l t   :  
                 / *   U p d a t e   t h e   e r r o r   c o d e   * /  
                 h i r d a - > E r r o r C o d e   | =   H A L _ I R D A _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
                 / *   R e t u r n   e r r o r   s t a t u s   * /  
                 s t a t u s   =     H A L _ E R R O R ;  
                 b r e a k ;  
         }  
     }  
     e l s e  
     {  
         / *   U p d a t e   t h e   e r r o r   c o d e   * /  
         h i r d a - > E r r o r C o d e   | =   H A L _ I R D A _ E R R O R _ I N V A L I D _ C A L L B A C K ;  
  
         / *   R e t u r n   e r r o r   s t a t u s   * /  
         s t a t u s   =     H A L _ E R R O R ;  
     }  
  
     / *   R e l e a s e   L o c k   * /  
     _ _ H A L _ U N L O C K ( h i r d a ) ;  
  
     r e t u r n   s t a t u s ;  
 }  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   I R D A _ E x p o r t e d _ F u n c t i o n s _ G r o u p 2   I O   o p e r a t i o n   f u n c t i o n s  
     *     @ b r i e f       I R D A   T r a n s m i t   a n d   R e c e i v e   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                             # # # # #   I O   o p e r a t i o n   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
         [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   m a n a g e   t h e   I R D A   d a t a   t r a n s f e r s .  
         I r D A   i s   a   h a l f   d u p l e x   c o m m u n i c a t i o n   p r o t o c o l .   I f   t h e   T r a n s m i t t e r   i s   b u s y ,   a n y   d a t a  
         o n   t h e   I r D A   r e c e i v e   l i n e   w i l l   b e   i g n o r e d   b y   t h e   I r D A   d e c o d e r   a n d   i f   t h e   R e c e i v e r  
         i s   b u s y ,   d a t a   o n   t h e   T X   f r o m   t h e   U S A R T   t o   I r D A   w i l l   n o t   b e   e n c o d e d   b y   I r D A .  
         W h i l e   r e c e i v i n g   d a t a ,   t r a n s m i s s i o n   s h o u l d   b e   a v o i d e d   a s   t h e   d a t a   t o   b e   t r a n s m i t t e d  
         c o u l d   b e   c o r r u p t e d .  
  
         ( # )   T h e r e   a r e   t w o   m o d e s   o f   t r a n s f e r :  
               ( + + )   B l o c k i n g   m o d e :   T h e   c o m m u n i c a t i o n   i s   p e r f o r m e d   i n   p o l l i n g   m o d e .  
                         T h e   H A L   s t a t u s   o f   a l l   d a t a   p r o c e s s i n g   i s   r e t u r n e d   b y   t h e   s a m e   f u n c t i o n  
                         a f t e r   f i n i s h i n g   t r a n s f e r .  
               ( + + )   N o n - B l o c k i n g   m o d e :   T h e   c o m m u n i c a t i o n   i s   p e r f o r m e d   u s i n g   I n t e r r u p t s  
                       o r   D M A ,   t h e s e   A P I ' s   r e t u r n   t h e   H A L   s t a t u s .  
                       T h e   e n d   o f   t h e   d a t a   p r o c e s s i n g   w i l l   b e   i n d i c a t e d   t h r o u g h   t h e  
                       d e d i c a t e d   I R D A   I R Q   w h e n   u s i n g   I n t e r r u p t   m o d e   o r   t h e   D M A   I R Q   w h e n  
                       u s i n g   D M A   m o d e .  
                       T h e   H A L _ I R D A _ T x C p l t C a l l b a c k ( ) ,   H A L _ I R D A _ R x C p l t C a l l b a c k ( )   u s e r   c a l l b a c k s  
                       w i l l   b e   e x e c u t e d   r e s p e c t i v e l y   a t   t h e   e n d   o f   t h e   T r a n s m i t   o r   R e c e i v e   p r o c e s s  
                       T h e   H A L _ I R D A _ E r r o r C a l l b a c k ( )   u s e r   c a l l b a c k   w i l l   b e   e x e c u t e d   w h e n   a   c o m m u n i c a t i o n   e r r o r   i s   d e t e c t e d  
  
         ( # )   B l o c k i n g   m o d e   A P I s   a r e   :  
                 ( + + )   H A L _ I R D A _ T r a n s m i t ( )  
                 ( + + )   H A L _ I R D A _ R e c e i v e ( )  
  
         ( # )   N o n   B l o c k i n g   m o d e   A P I s   w i t h   I n t e r r u p t   a r e   :  
                 ( + + )   H A L _ I R D A _ T r a n s m i t _ I T ( )  
                 ( + + )   H A L _ I R D A _ R e c e i v e _ I T ( )  
                 ( + + )   H A L _ I R D A _ I R Q H a n d l e r ( )  
  
         ( # )   N o n   B l o c k i n g   m o d e   f u n c t i o n s   w i t h   D M A   a r e   :  
                 ( + + )   H A L _ I R D A _ T r a n s m i t _ D M A ( )  
                 ( + + )   H A L _ I R D A _ R e c e i v e _ D M A ( )  
                 ( + + )   H A L _ I R D A _ D M A P a u s e ( )  
                 ( + + )   H A L _ I R D A _ D M A R e s u m e ( )  
                 ( + + )   H A L _ I R D A _ D M A S t o p ( )  
  
         ( # )   A   s e t   o f   T r a n s f e r   C o m p l e t e   C a l l b a c k s   a r e   p r o v i d e d   i n   N o n   B l o c k i n g   m o d e :  
                 ( + + )   H A L _ I R D A _ T x H a l f C p l t C a l l b a c k ( )  
                 ( + + )   H A L _ I R D A _ T x C p l t C a l l b a c k ( )  
                 ( + + )   H A L _ I R D A _ R x H a l f C p l t C a l l b a c k ( )  
                 ( + + )   H A L _ I R D A _ R x C p l t C a l l b a c k ( )  
                 ( + + )   H A L _ I R D A _ E r r o r C a l l b a c k ( )  
  
         ( # )   N o n - B l o c k i n g   m o d e   t r a n s f e r s   c o u l d   b e   a b o r t e d   u s i n g   A b o r t   A P I ' s   :  
                 ( + )   H A L _ I R D A _ A b o r t ( )  
                 ( + )   H A L _ I R D A _ A b o r t T r a n s m i t ( )  
                 ( + )   H A L _ I R D A _ A b o r t R e c e i v e ( )  
                 ( + )   H A L _ I R D A _ A b o r t _ I T ( )  
                 ( + )   H A L _ I R D A _ A b o r t T r a n s m i t _ I T ( )  
                 ( + )   H A L _ I R D A _ A b o r t R e c e i v e _ I T ( )  
  
         ( # )   F o r   A b o r t   s e r v i c e s   b a s e d   o n   i n t e r r u p t s   ( H A L _ I R D A _ A b o r t x x x _ I T ) ,   a   s e t   o f   A b o r t   C o m p l e t e   C a l l b a c k s   a r e   p r o v i d e d :  
                 ( + )   H A L _ I R D A _ A b o r t C p l t C a l l b a c k ( )  
                 ( + )   H A L _ I R D A _ A b o r t T r a n s m i t C p l t C a l l b a c k ( )  
                 ( + )   H A L _ I R D A _ A b o r t R e c e i v e C p l t C a l l b a c k ( )  
  
         ( # )   I n   N o n - B l o c k i n g   m o d e   t r a n s f e r s ,   p o s s i b l e   e r r o r s   a r e   s p l i t   i n t o   2   c a t e g o r i e s .  
                 E r r o r s   a r e   h a n d l e d   a s   f o l l o w s   :  
                 ( + )   E r r o r   i s   c o n s i d e r e d   a s   R e c o v e r a b l e   a n d   n o n   b l o c k i n g   :   T r a n s f e r   c o u l d   g o   t i l l   e n d ,   b u t   e r r o r   s e v e r i t y   i s  
                         t o   b e   e v a l u a t e d   b y   u s e r   :   t h i s   c o n c e r n s   F r a m e   E r r o r ,   P a r i t y   E r r o r   o r   N o i s e   E r r o r   i n   I n t e r r u p t   m o d e   r e c e p t i o n   .  
                         R e c e i v e d   c h a r a c t e r   i s   t h e n   r e t r i e v e d   a n d   s t o r e d   i n   R x   b u f f e r ,   E r r o r   c o d e   i s   s e t   t o   a l l o w   u s e r   t o   i d e n t i f y   e r r o r   t y p e ,  
                         a n d   H A L _ I R D A _ E r r o r C a l l b a c k ( )   u s e r   c a l l b a c k   i s   e x e c u t e d .   T r a n s f e r   i s   k e p t   o n g o i n g   o n   I R D A   s i d e .  
                         I f   u s e r   w a n t s   t o   a b o r t   i t ,   A b o r t   s e r v i c e s   s h o u l d   b e   c a l l e d   b y   u s e r .  
                 ( + )   E r r o r   i s   c o n s i d e r e d   a s   B l o c k i n g   :   T r a n s f e r   c o u l d   n o t   b e   c o m p l e t e d   p r o p e r l y   a n d   i s   a b o r t e d .  
                         T h i s   c o n c e r n s   O v e r r u n   E r r o r   I n   I n t e r r u p t   m o d e   r e c e p t i o n   a n d   a l l   e r r o r s   i n   D M A   m o d e .  
                         E r r o r   c o d e   i s   s e t   t o   a l l o w   u s e r   t o   i d e n t i f y   e r r o r   t y p e ,   a n d   H A L _ I R D A _ E r r o r C a l l b a c k ( )   u s e r   c a l l b a c k   i s   e x e c u t e d .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f   S e n d s   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e .  
     *   @ n o t e     W h e n   U A R T   p a r i t y   i s   n o t   e n a b l e d   ( P C E   =   0 ) ,   a n d   W o r d   L e n g t h   i s   c o n f i g u r e d   t o   9   b i t s   ( M 1 - M 0   =   0 1 ) ,  
     *                 t h e   s e n t   d a t a   i s   h a n d l e d   a s   a   s e t   o f   u 1 6 .   I n   t h i s   c a s e ,   S i z e   m u s t   r e f l e c t   t h e   n u m b e r  
     *                 o f   u 1 6   a v a i l a b l e   t h r o u g h   p D a t a .  
     *   @ p a r a m   h i r d a   P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ p a r a m   p D a t a   P o i n t e r   t o   d a t a   b u f f e r   ( u 8   o r   u 1 6   d a t a   e l e m e n t s ) .  
     *   @ p a r a m   S i z e     A m o u n t   o f   d a t a   e l e m e n t s   ( u 8   o r   u 1 6 )   t o   b e   s e n t .  
     *   @ p a r a m   T i m e o u t   S p e c i f y   t i m e o u t   v a l u e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I R D A _ T r a n s m i t ( I R D A _ H a n d l e T y p e D e f   * h i r d a ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     u i n t 1 6 _ t   * t m p ;  
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ;  
  
     / *   C h e c k   t h a t   a   T x   p r o c e s s   i s   n o t   a l r e a d y   o n g o i n g   * /  
     i f   ( h i r d a - > g S t a t e   = =   H A L _ I R D A _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n     H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i r d a ) ;  
  
         h i r d a - > E r r o r C o d e   =   H A L _ I R D A _ E R R O R _ N O N E ;  
         h i r d a - > g S t a t e   =   H A L _ I R D A _ S T A T E _ B U S Y _ T X ;  
  
         / *   I n i t   t i c k s t a r t   f o r   t i m e o u t   m a n a g e m e n t * /  
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
         h i r d a - > T x X f e r S i z e   =   S i z e ;  
         h i r d a - > T x X f e r C o u n t   =   S i z e ;  
         w h i l e   ( h i r d a - > T x X f e r C o u n t   >   0 U )  
         {  
             h i r d a - > T x X f e r C o u n t - - ;  
             i f   ( h i r d a - > I n i t . W o r d L e n g t h   = =   I R D A _ W O R D L E N G T H _ 9 B )  
             {  
                 i f   ( I R D A _ W a i t O n F l a g U n t i l T i m e o u t ( h i r d a ,   I R D A _ F L A G _ T X E ,   R E S E T ,   t i c k s t a r t ,   T i m e o u t )   ! =   H A L _ O K )  
                 {  
                     r e t u r n   H A L _ T I M E O U T ;  
                 }  
                 t m p   =   ( u i n t 1 6 _ t   * )   p D a t a ;  
                 h i r d a - > I n s t a n c e - > D R   =   ( * t m p   &   ( u i n t 1 6 _ t ) 0 x 0 1 F F ) ;  
                 i f   ( h i r d a - > I n i t . P a r i t y   = =   I R D A _ P A R I T Y _ N O N E )  
                 {  
                     p D a t a   + =   2 U ;  
                 }  
                 e l s e  
                 {  
                     p D a t a   + =   1 U ;  
                 }  
             }  
             e l s e  
             {  
                 i f   ( I R D A _ W a i t O n F l a g U n t i l T i m e o u t ( h i r d a ,   I R D A _ F L A G _ T X E ,   R E S E T ,   t i c k s t a r t ,   T i m e o u t )   ! =   H A L _ O K )  
                 {  
                     r e t u r n   H A L _ T I M E O U T ;  
                 }  
                 h i r d a - > I n s t a n c e - > D R   =   ( * p D a t a + +   &   ( u i n t 8 _ t ) 0 x F F ) ;  
             }  
         }  
  
         i f   ( I R D A _ W a i t O n F l a g U n t i l T i m e o u t ( h i r d a ,   I R D A _ F L A G _ T C ,   R E S E T ,   t i c k s t a r t ,   T i m e o u t )   ! =   H A L _ O K )  
         {  
             r e t u r n   H A L _ T I M E O U T ;  
         }  
  
         / *   A t   e n d   o f   T x   p r o c e s s ,   r e s t o r e   h i r d a - > g S t a t e   t o   R e a d y   * /  
         h i r d a - > g S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i r d a ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   b l o c k i n g   m o d e .  
     *   @ n o t e     W h e n   U A R T   p a r i t y   i s   n o t   e n a b l e d   ( P C E   =   0 ) ,   a n d   W o r d   L e n g t h   i s   c o n f i g u r e d   t o   9   b i t s   ( M 1 - M 0   =   0 1 ) ,  
     *                 t h e   r e c e i v e d   d a t a   i s   h a n d l e d   a s   a   s e t   o f   u 1 6 .   I n   t h i s   c a s e ,   S i z e   m u s t   r e f l e c t   t h e   n u m b e r  
     *                 o f   u 1 6   a v a i l a b l e   t h r o u g h   p D a t a .  
     *   @ p a r a m   h i r d a   P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ p a r a m   p D a t a   P o i n t e r   t o   d a t a   b u f f e r   ( u 8   o r   u 1 6   d a t a   e l e m e n t s ) .  
     *   @ p a r a m   S i z e     A m o u n t   o f   d a t a   e l e m e n t s   ( u 8   o r   u 1 6 )   t o   b e   r e c e i v e d .  
     *   @ p a r a m   T i m e o u t   S p e c i f y   t i m e o u t   v a l u e  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I R D A _ R e c e i v e ( I R D A _ H a n d l e T y p e D e f   * h i r d a ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     u i n t 1 6 _ t   * t m p ;  
     u i n t 3 2 _ t   t i c k s t a r t   =   0 U ;  
  
     / *   C h e c k   t h a t   a   R x   p r o c e s s   i s   n o t   a l r e a d y   o n g o i n g   * /  
     i f   ( h i r d a - > R x S t a t e   = =   H A L _ I R D A _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n     H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i r d a ) ;  
  
         h i r d a - > E r r o r C o d e   =   H A L _ I R D A _ E R R O R _ N O N E ;  
         h i r d a - > R x S t a t e   =   H A L _ I R D A _ S T A T E _ B U S Y _ R X ;  
  
         / *   I n i t   t i c k s t a r t   f o r   t i m e o u t   m a n a g e m e n t * /  
         t i c k s t a r t   =   H A L _ G e t T i c k ( ) ;  
  
         h i r d a - > R x X f e r S i z e   =   S i z e ;  
         h i r d a - > R x X f e r C o u n t   =   S i z e ;  
  
         / *   C h e c k   t h e   r e m a i n   d a t a   t o   b e   r e c e i v e d   * /  
         w h i l e   ( h i r d a - > R x X f e r C o u n t   >   0 U )  
         {  
             h i r d a - > R x X f e r C o u n t - - ;  
  
             i f   ( h i r d a - > I n i t . W o r d L e n g t h   = =   I R D A _ W O R D L E N G T H _ 9 B )  
             {  
                 i f   ( I R D A _ W a i t O n F l a g U n t i l T i m e o u t ( h i r d a ,   I R D A _ F L A G _ R X N E ,   R E S E T ,   t i c k s t a r t ,   T i m e o u t )   ! =   H A L _ O K )  
                 {  
                     r e t u r n   H A L _ T I M E O U T ;  
                 }  
                 t m p   =   ( u i n t 1 6 _ t   * )   p D a t a   ;  
                 i f   ( h i r d a - > I n i t . P a r i t y   = =   I R D A _ P A R I T Y _ N O N E )  
                 {  
                     * t m p   =   ( u i n t 1 6 _ t ) ( h i r d a - > I n s t a n c e - > D R   &   ( u i n t 1 6 _ t ) 0 x 0 1 F F ) ;  
                     p D a t a   + =   2 U ;  
                 }  
                 e l s e  
                 {  
                     * t m p   =   ( u i n t 1 6 _ t ) ( h i r d a - > I n s t a n c e - > D R   &   ( u i n t 1 6 _ t ) 0 x 0 0 F F ) ;  
                     p D a t a   + =   1 U ;  
                 }  
             }  
             e l s e  
             {  
                 i f   ( I R D A _ W a i t O n F l a g U n t i l T i m e o u t ( h i r d a ,   I R D A _ F L A G _ R X N E ,   R E S E T ,   t i c k s t a r t ,   T i m e o u t )   ! =   H A L _ O K )  
                 {  
                     r e t u r n   H A L _ T I M E O U T ;  
                 }  
                 i f   ( h i r d a - > I n i t . P a r i t y   = =   I R D A _ P A R I T Y _ N O N E )  
                 {  
                     * p D a t a + +   =   ( u i n t 8 _ t ) ( h i r d a - > I n s t a n c e - > D R   &   ( u i n t 8 _ t ) 0 x 0 0 F F ) ;  
                 }  
                 e l s e  
                 {  
                     * p D a t a + +   =   ( u i n t 8 _ t ) ( h i r d a - > I n s t a n c e - > D R   &   ( u i n t 8 _ t ) 0 x 0 0 7 F ) ;  
                 }  
             }  
         }  
  
         / *   A t   e n d   o f   R x   p r o c e s s ,   r e s t o r e   h i r d a - > R x S t a t e   t o   R e a d y   * /  
         h i r d a - > R x S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i r d a ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f   S e n d   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e .  
     *   @ n o t e     W h e n   U A R T   p a r i t y   i s   n o t   e n a b l e d   ( P C E   =   0 ) ,   a n d   W o r d   L e n g t h   i s   c o n f i g u r e d   t o   9   b i t s   ( M 1 - M 0   =   0 1 ) ,  
     *                 t h e   s e n t   d a t a   i s   h a n d l e d   a s   a   s e t   o f   u 1 6 .   I n   t h i s   c a s e ,   S i z e   m u s t   r e f l e c t   t h e   n u m b e r  
     *                 o f   u 1 6   a v a i l a b l e   t h r o u g h   p D a t a .  
     *   @ p a r a m   h i r d a   P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ p a r a m   p D a t a   P o i n t e r   t o   d a t a   b u f f e r   ( u 8   o r   u 1 6   d a t a   e l e m e n t s ) .  
     *   @ p a r a m   S i z e     A m o u n t   o f   d a t a   e l e m e n t s   ( u 8   o r   u 1 6 )   t o   b e   s e n t .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I R D A _ T r a n s m i t _ I T ( I R D A _ H a n d l e T y p e D e f   * h i r d a ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     / *   C h e c k   t h a t   a   T x   p r o c e s s   i s   n o t   a l r e a d y   o n g o i n g   * /  
     i f   ( h i r d a - > g S t a t e   = =   H A L _ I R D A _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i r d a ) ;  
  
         h i r d a - > p T x B u f f P t r   =   p D a t a ;  
         h i r d a - > T x X f e r S i z e   =   S i z e ;  
         h i r d a - > T x X f e r C o u n t   =   S i z e ;  
  
         h i r d a - > E r r o r C o d e   =   H A L _ I R D A _ E R R O R _ N O N E ;  
         h i r d a - > g S t a t e   =   H A L _ I R D A _ S T A T E _ B U S Y _ T X ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i r d a ) ;  
  
         / *   E n a b l e   t h e   I R D A   T r a n s m i t   D a t a   R e g i s t e r   E m p t y   I n t e r r u p t   * /  
         S E T _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ T X E I E ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f   R e c e i v e   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e .  
     *   @ n o t e     W h e n   U A R T   p a r i t y   i s   n o t   e n a b l e d   ( P C E   =   0 ) ,   a n d   W o r d   L e n g t h   i s   c o n f i g u r e d   t o   9   b i t s   ( M 1 - M 0   =   0 1 ) ,  
     *                 t h e   r e c e i v e d   d a t a   i s   h a n d l e d   a s   a   s e t   o f   u 1 6 .   I n   t h i s   c a s e ,   S i z e   m u s t   r e f l e c t   t h e   n u m b e r  
     *                 o f   u 1 6   a v a i l a b l e   t h r o u g h   p D a t a .  
     *   @ p a r a m   h i r d a   P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ p a r a m   p D a t a   P o i n t e r   t o   d a t a   b u f f e r   ( u 8   o r   u 1 6   d a t a   e l e m e n t s ) .  
     *   @ p a r a m   S i z e     A m o u n t   o f   d a t a   e l e m e n t s   ( u 8   o r   u 1 6 )   t o   b e   r e c e i v e d .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I R D A _ R e c e i v e _ I T ( I R D A _ H a n d l e T y p e D e f   * h i r d a ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     / *   C h e c k   t h a t   a   R x   p r o c e s s   i s   n o t   a l r e a d y   o n g o i n g   * /  
     i f   ( h i r d a - > R x S t a t e   = =   H A L _ I R D A _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i r d a ) ;  
  
         h i r d a - > p R x B u f f P t r   =   p D a t a ;  
         h i r d a - > R x X f e r S i z e   =   S i z e ;  
         h i r d a - > R x X f e r C o u n t   =   S i z e ;  
  
         h i r d a - > E r r o r C o d e   =   H A L _ I R D A _ E R R O R _ N O N E ;  
         h i r d a - > R x S t a t e   =   H A L _ I R D A _ S T A T E _ B U S Y _ R X ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i r d a ) ;  
  
         / *   E n a b l e   t h e   I R D A   P a r i t y   E r r o r   a n d   D a t a   R e g i s t e r   N o t   E m p t y   I n t e r r u p t s   * /  
         S E T _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ P E I E   |   U S A R T _ C R 1 _ R X N E I E ) ;  
  
         / *   E n a b l e   t h e   I R D A   E r r o r   I n t e r r u p t :   ( F r a m e   e r r o r ,   N o i s e   e r r o r ,   O v e r r u n   e r r o r )   * /  
         S E T _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f   S e n d   a n   a m o u n t   o f   d a t a   i n   D M A   m o d e .  
     *   @ n o t e     W h e n   U A R T   p a r i t y   i s   n o t   e n a b l e d   ( P C E   =   0 ) ,   a n d   W o r d   L e n g t h   i s   c o n f i g u r e d   t o   9   b i t s   ( M 1 - M 0   =   0 1 ) ,  
     *                 t h e   s e n t   d a t a   i s   h a n d l e d   a s   a   s e t   o f   u 1 6 .   I n   t h i s   c a s e ,   S i z e   m u s t   r e f l e c t   t h e   n u m b e r  
     *                 o f   u 1 6   a v a i l a b l e   t h r o u g h   p D a t a .  
     *   @ p a r a m   h i r d a   P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ p a r a m   p D a t a   P o i n t e r   t o   d a t a   b u f f e r   ( u 8   o r   u 1 6   d a t a   e l e m e n t s ) .  
     *   @ p a r a m   S i z e     A m o u n t   o f   d a t a   e l e m e n t s   ( u 8   o r   u 1 6 )   t o   b e   s e n t .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I R D A _ T r a n s m i t _ D M A ( I R D A _ H a n d l e T y p e D e f   * h i r d a ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     u i n t 3 2 _ t   * t m p ;  
  
     / *   C h e c k   t h a t   a   T x   p r o c e s s   i s   n o t   a l r e a d y   o n g o i n g   * /  
     i f   ( h i r d a - > g S t a t e   = =   H A L _ I R D A _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i r d a ) ;  
  
         h i r d a - > p T x B u f f P t r   =   p D a t a ;  
         h i r d a - > T x X f e r S i z e   =   S i z e ;  
         h i r d a - > T x X f e r C o u n t   =   S i z e ;  
  
         h i r d a - > E r r o r C o d e   =   H A L _ I R D A _ E R R O R _ N O N E ;  
         h i r d a - > g S t a t e   =   H A L _ I R D A _ S T A T E _ B U S Y _ T X ;  
  
         / *   S e t   t h e   I R D A   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
         h i r d a - > h d m a t x - > X f e r C p l t C a l l b a c k   =   I R D A _ D M A T r a n s m i t C p l t ;  
  
         / *   S e t   t h e   I R D A   D M A   h a l f   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
         h i r d a - > h d m a t x - > X f e r H a l f C p l t C a l l b a c k   =   I R D A _ D M A T r a n s m i t H a l f C p l t ;  
  
         / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
         h i r d a - > h d m a t x - > X f e r E r r o r C a l l b a c k   =   I R D A _ D M A E r r o r ;  
  
         / *   S e t   t h e   D M A   a b o r t   c a l l b a c k   * /  
         h i r d a - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
         / *   E n a b l e   t h e   I R D A   t r a n s m i t   D M A   c h a n n e l   * /  
         t m p   =   ( u i n t 3 2 _ t   * ) & p D a t a ;  
         H A L _ D M A _ S t a r t _ I T ( h i r d a - > h d m a t x ,   * ( u i n t 3 2 _ t   * ) t m p ,   ( u i n t 3 2 _ t ) & h i r d a - > I n s t a n c e - > D R ,   S i z e ) ;  
  
         / *   C l e a r   t h e   T C   f l a g   i n   t h e   S R   r e g i s t e r   b y   w r i t i n g   0   t o   i t   * /  
         _ _ H A L _ I R D A _ C L E A R _ F L A G ( h i r d a ,   I R D A _ F L A G _ T C ) ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i r d a ) ;  
  
         / *   E n a b l e   t h e   D M A   t r a n s f e r   f o r   t r a n s m i t   r e q u e s t   b y   s e t t i n g   t h e   D M A T   b i t  
         i n   t h e   U S A R T   C R 3   r e g i s t e r   * /  
         S E T _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f   R e c e i v e s   a n   a m o u n t   o f   d a t a   i n   D M A   m o d e .  
     *   @ n o t e     W h e n   U A R T   p a r i t y   i s   n o t   e n a b l e d   ( P C E   =   0 ) ,   a n d   W o r d   L e n g t h   i s   c o n f i g u r e d   t o   9   b i t s   ( M 1 - M 0   =   0 1 ) ,  
     *                 t h e   r e c e i v e d   d a t a   i s   h a n d l e d   a s   a   s e t   o f   u 1 6 .   I n   t h i s   c a s e ,   S i z e   m u s t   r e f l e c t   t h e   n u m b e r  
     *                 o f   u 1 6   a v a i l a b l e   t h r o u g h   p D a t a .  
     *   @ p a r a m   h i r d a   P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ p a r a m   p D a t a   P o i n t e r   t o   d a t a   b u f f e r   ( u 8   o r   u 1 6   d a t a   e l e m e n t s ) .  
     *   @ p a r a m   S i z e     A m o u n t   o f   d a t a   e l e m e n t s   ( u 8   o r   u 1 6 )   t o   b e   r e c e i v e d .  
     *   @ n o t e       W h e n   t h e   I R D A   p a r i t y   i s   e n a b l e d   ( P C E   =   1 )   t h e   d a t a   r e c e i v e d   c o n t a i n   t h e   p a r i t y   b i t .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I R D A _ R e c e i v e _ D M A ( I R D A _ H a n d l e T y p e D e f   * h i r d a ,   u i n t 8 _ t   * p D a t a ,   u i n t 1 6 _ t   S i z e )  
 {  
     u i n t 3 2 _ t   * t m p ;  
  
     / *   C h e c k   t h a t   a   R x   p r o c e s s   i s   n o t   a l r e a d y   o n g o i n g   * /  
     i f   ( h i r d a - > R x S t a t e   = =   H A L _ I R D A _ S T A T E _ R E A D Y )  
     {  
         i f   ( ( p D a t a   = =   N U L L )   | |   ( S i z e   = =   0 U ) )  
         {  
             r e t u r n   H A L _ E R R O R ;  
         }  
  
         / *   P r o c e s s   L o c k e d   * /  
         _ _ H A L _ L O C K ( h i r d a ) ;  
  
         h i r d a - > p R x B u f f P t r   =   p D a t a ;  
         h i r d a - > R x X f e r S i z e   =   S i z e ;  
  
         h i r d a - > E r r o r C o d e   =   H A L _ I R D A _ E R R O R _ N O N E ;  
         h i r d a - > R x S t a t e   =   H A L _ I R D A _ S T A T E _ B U S Y _ R X ;  
  
         / *   S e t   t h e   I R D A   D M A   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
         h i r d a - > h d m a r x - > X f e r C p l t C a l l b a c k   =   I R D A _ D M A R e c e i v e C p l t ;  
  
         / *   S e t   t h e   I R D A   D M A   h a l f   t r a n s f e r   c o m p l e t e   c a l l b a c k   * /  
         h i r d a - > h d m a r x - > X f e r H a l f C p l t C a l l b a c k   =   I R D A _ D M A R e c e i v e H a l f C p l t ;  
  
         / *   S e t   t h e   D M A   e r r o r   c a l l b a c k   * /  
         h i r d a - > h d m a r x - > X f e r E r r o r C a l l b a c k   =   I R D A _ D M A E r r o r ;  
  
         / *   S e t   t h e   D M A   a b o r t   c a l l b a c k   * /  
         h i r d a - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
         / *   E n a b l e   t h e   D M A   c h a n n e l   * /  
         t m p   =   ( u i n t 3 2 _ t   * ) & p D a t a ;  
         H A L _ D M A _ S t a r t _ I T ( h i r d a - > h d m a r x ,   ( u i n t 3 2 _ t ) & h i r d a - > I n s t a n c e - > D R ,   * ( u i n t 3 2 _ t   * ) t m p ,   S i z e ) ;  
  
         / *   C l e a r   t h e   O v e r r u n   f l a g   j u s t   b e f o r e   e n a b l i n g   t h e   D M A   R x   r e q u e s t :   c a n   b e   m a n d a t o r y   f o r   t h e   s e c o n d   t r a n s f e r   * /  
         _ _ H A L _ I R D A _ C L E A R _ O R E F L A G ( h i r d a ) ;  
  
         / *   P r o c e s s   U n l o c k e d   * /  
         _ _ H A L _ U N L O C K ( h i r d a ) ;  
  
         / *   E n a b l e   t h e   I R D A   P a r i t y   E r r o r   I n t e r r u p t   * /  
         S E T _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ P E I E ) ;  
  
         / *   E n a b l e   t h e   I R D A   E r r o r   I n t e r r u p t :   ( F r a m e   e r r o r ,   N o i s e   e r r o r ,   O v e r r u n   e r r o r )   * /  
         S E T _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
         / *   E n a b l e   t h e   D M A   t r a n s f e r   f o r   t h e   r e c e i v e r   r e q u e s t   b y   s e t t i n g   t h e   D M A R   b i t  
         i n   t h e   U S A R T   C R 3   r e g i s t e r   * /  
         S E T _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f   P a u s e s   t h e   D M A   T r a n s f e r .  
     *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I R D A _ D M A P a u s e ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     u i n t 3 2 _ t   d m a r e q u e s t   =   0 x 0 0 U ;  
  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h i r d a ) ;  
  
     d m a r e q u e s t   =   H A L _ I S _ B I T _ S E T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
     i f   ( ( h i r d a - > g S t a t e   = =   H A L _ I R D A _ S T A T E _ B U S Y _ T X )   & &   d m a r e q u e s t )  
     {  
         / *   D i s a b l e   t h e   I R D A   D M A   T x   r e q u e s t   * /  
         C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
     }  
  
     d m a r e q u e s t   =   H A L _ I S _ B I T _ S E T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
     i f   ( ( h i r d a - > R x S t a t e   = =   H A L _ I R D A _ S T A T E _ B U S Y _ R X )   & &   d m a r e q u e s t )  
     {  
         / *   D i s a b l e   P E   a n d   E R R   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   i n t e r r u p t s   * /  
         C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ P E I E ) ;  
         C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
         / *   D i s a b l e   t h e   I R D A   D M A   R x   r e q u e s t   * /  
         C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
     }  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h i r d a ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f   R e s u m e s   t h e   D M A   T r a n s f e r .  
     *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I R D A _ D M A R e s u m e ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   P r o c e s s   L o c k e d   * /  
     _ _ H A L _ L O C K ( h i r d a ) ;  
  
     i f   ( h i r d a - > g S t a t e   = =   H A L _ I R D A _ S T A T E _ B U S Y _ T X )  
     {  
         / *   E n a b l e   t h e   I R D A   D M A   T x   r e q u e s t   * /  
         S E T _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
     }  
  
     i f   ( h i r d a - > R x S t a t e   = =   H A L _ I R D A _ S T A T E _ B U S Y _ R X )  
     {  
         / *   C l e a r   t h e   O v e r r u n   f l a g   b e f o r e   r e s u m i n g   t h e   R x   t r a n s f e r   * /  
         _ _ H A L _ I R D A _ C L E A R _ O R E F L A G ( h i r d a ) ;  
  
         / *   R e - e n a b l e   P E   a n d   E R R   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   i n t e r r u p t s   * /  
         S E T _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ P E I E ) ;  
         S E T _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
         / *   E n a b l e   t h e   I R D A   D M A   R x   r e q u e s t   * /  
         S E T _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
     }  
  
     / *   P r o c e s s   U n l o c k e d   * /  
     _ _ H A L _ U N L O C K ( h i r d a ) ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f   S t o p s   t h e   D M A   T r a n s f e r .  
     *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I R D A _ D M A S t o p ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     u i n t 3 2 _ t   d m a r e q u e s t   =   0 x 0 0 U ;  
     / *   T h e   L o c k   i s   n o t   i m p l e m e n t e d   o n   t h i s   A P I   t o   a l l o w   t h e   u s e r   a p p l i c a t i o n  
           t o   c a l l   t h e   H A L   I R D A   A P I   u n d e r   c a l l b a c k s   H A L _ I R D A _ T x C p l t C a l l b a c k ( )   /   H A L _ I R D A _ R x C p l t C a l l b a c k ( ) :  
           w h e n   c a l l i n g   H A L _ D M A _ A b o r t ( )   A P I   t h e   D M A   T X / R X   T r a n s f e r   c o m p l e t e   i n t e r r u p t   i s   g e n e r a t e d  
           a n d   t h e   c o r r e s p o n d   c a l l   b a c k   i s   e x e c u t e d   H A L _ I R D A _ T x C p l t C a l l b a c k ( )   /   H A L _ I R D A _ R x C p l t C a l l b a c k ( )  
     * /  
  
     / *   S t o p   I R D A   D M A   T x   r e q u e s t   i f   o n g o i n g   * /  
     d m a r e q u e s t   =   H A L _ I S _ B I T _ S E T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
     i f   ( ( h i r d a - > g S t a t e   = =   H A L _ I R D A _ S T A T E _ B U S Y _ T X )   & &   d m a r e q u e s t )  
     {  
         C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
         / *   A b o r t   t h e   I R D A   D M A   T x   c h a n n e l   * /  
         i f   ( h i r d a - > h d m a t x   ! =   N U L L )  
         {  
             H A L _ D M A _ A b o r t ( h i r d a - > h d m a t x ) ;  
         }  
         I R D A _ E n d T x T r a n s f e r ( h i r d a ) ;  
     }  
  
     / *   S t o p   I R D A   D M A   R x   r e q u e s t   i f   o n g o i n g   * /  
     d m a r e q u e s t   =   H A L _ I S _ B I T _ S E T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
     i f   ( ( h i r d a - > R x S t a t e   = =   H A L _ I R D A _ S T A T E _ B U S Y _ R X )   & &   d m a r e q u e s t )  
     {  
         C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
         / *   A b o r t   t h e   I R D A   D M A   R x   c h a n n e l   * /  
         i f   ( h i r d a - > h d m a r x   ! =   N U L L )  
         {  
             H A L _ D M A _ A b o r t ( h i r d a - > h d m a r x ) ;  
         }  
         I R D A _ E n d R x T r a n s f e r ( h i r d a ) ;  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     A b o r t   o n g o i n g   t r a n s f e r s   ( b l o c k i n g   m o d e ) .  
     *   @ p a r a m     h i r d a   I R D A   h a n d l e .  
     *   @ n o t e       T h i s   p r o c e d u r e   c o u l d   b e   u s e d   f o r   a b o r t i n g   a n y   o n g o i n g   t r a n s f e r   s t a r t e d   i n   I n t e r r u p t   o r   D M A   m o d e .  
     *                   T h i s   p r o c e d u r e   p e r f o r m s   f o l l o w i n g   o p e r a t i o n s   :  
     *                       -   D i s a b l e   P P P   I n t e r r u p t s  
     *                       -   D i s a b l e   t h e   D M A   t r a n s f e r   i n   t h e   p e r i p h e r a l   r e g i s t e r   ( i f   e n a b l e d )  
     *                       -   A b o r t   D M A   t r a n s f e r   b y   c a l l i n g   H A L _ D M A _ A b o r t   ( i n   c a s e   o f   t r a n s f e r   i n   D M A   m o d e )  
     *                       -   S e t   h a n d l e   S t a t e   t o   R E A D Y  
     *   @ n o t e       T h i s   p r o c e d u r e   i s   e x e c u t e d   i n   b l o c k i n g   m o d e   :   w h e n   e x i t i n g   f u n c t i o n ,   A b o r t   i s   c o n s i d e r e d   a s   c o m p l e t e d .  
     *   @ r e t v a l   H A L   s t a t u s  
 * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I R D A _ A b o r t ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   D i s a b l e   T X E I E ,   T C I E ,   R X N E ,   P E   a n d   E R R   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ R X N E I E   |   U S A R T _ C R 1 _ P E I E   |   U S A R T _ C R 1 _ T X E I E   |   U S A R T _ C R 1 _ T C I E ) ) ;  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
     / *   D i s a b l e   t h e   I R D A   D M A   T x   r e q u e s t   i f   e n a b l e d   * /  
     i f   ( H A L _ I S _ B I T _ S E T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) )  
     {  
         C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
         / *   A b o r t   t h e   I R D A   D M A   T x   c h a n n e l   :   u s e   b l o c k i n g   D M A   A b o r t   A P I   ( n o   c a l l b a c k )   * /  
         i f   ( h i r d a - > h d m a t x   ! =   N U L L )  
         {  
             / *   S e t   t h e   I R D A   D M A   A b o r t   c a l l b a c k   t o   N u l l .  
                   N o   c a l l   b a c k   e x e c u t i o n   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
             h i r d a - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
             H A L _ D M A _ A b o r t ( h i r d a - > h d m a t x ) ;  
         }  
     }  
  
     / *   D i s a b l e   t h e   I R D A   D M A   R x   r e q u e s t   i f   e n a b l e d   * /  
     i f   ( H A L _ I S _ B I T _ S E T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) )  
     {  
         C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
         / *   A b o r t   t h e   I R D A   D M A   R x   c h a n n e l   :   u s e   b l o c k i n g   D M A   A b o r t   A P I   ( n o   c a l l b a c k )   * /  
         i f   ( h i r d a - > h d m a r x   ! =   N U L L )  
         {  
             / *   S e t   t h e   I R D A   D M A   A b o r t   c a l l b a c k   t o   N u l l .  
                   N o   c a l l   b a c k   e x e c u t i o n   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
             h i r d a - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
             H A L _ D M A _ A b o r t ( h i r d a - > h d m a r x ) ;  
         }  
     }  
  
     / *   R e s e t   T x   a n d   R x   t r a n s f e r   c o u n t e r s   * /  
     h i r d a - > T x X f e r C o u n t   =   0 x 0 0 U ;  
     h i r d a - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
     / *   R e s e t   E r r o r C o d e   * /  
     h i r d a - > E r r o r C o d e   =   H A L _ I R D A _ E R R O R _ N O N E ;  
  
     / *   R e s t o r e   h i r d a - > R x S t a t e   a n d   h i r d a - > g S t a t e   t o   R e a d y   * /  
     h i r d a - > R x S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
     h i r d a - > g S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     A b o r t   o n g o i n g   T r a n s m i t   t r a n s f e r   ( b l o c k i n g   m o d e ) .  
     *   @ p a r a m     h i r d a   I R D A   h a n d l e .  
     *   @ n o t e       T h i s   p r o c e d u r e   c o u l d   b e   u s e d   f o r   a b o r t i n g   a n y   o n g o i n g   t r a n s f e r   s t a r t e d   i n   I n t e r r u p t   o r   D M A   m o d e .  
     *                   T h i s   p r o c e d u r e   p e r f o r m s   f o l l o w i n g   o p e r a t i o n s   :  
     *                       -   D i s a b l e   P P P   I n t e r r u p t s  
     *                       -   D i s a b l e   t h e   D M A   t r a n s f e r   i n   t h e   p e r i p h e r a l   r e g i s t e r   ( i f   e n a b l e d )  
     *                       -   A b o r t   D M A   t r a n s f e r   b y   c a l l i n g   H A L _ D M A _ A b o r t   ( i n   c a s e   o f   t r a n s f e r   i n   D M A   m o d e )  
     *                       -   S e t   h a n d l e   S t a t e   t o   R E A D Y  
     *   @ n o t e       T h i s   p r o c e d u r e   i s   e x e c u t e d   i n   b l o c k i n g   m o d e   :   w h e n   e x i t i n g   f u n c t i o n ,   A b o r t   i s   c o n s i d e r e d   a s   c o m p l e t e d .  
     *   @ r e t v a l   H A L   s t a t u s  
 * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I R D A _ A b o r t T r a n s m i t ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   D i s a b l e   T X E I E   a n d   T C I E   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ T X E I E   |   U S A R T _ C R 1 _ T C I E ) ) ;  
  
     / *   D i s a b l e   t h e   I R D A   D M A   T x   r e q u e s t   i f   e n a b l e d   * /  
     i f   ( H A L _ I S _ B I T _ S E T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) )  
     {  
         C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
         / *   A b o r t   t h e   I R D A   D M A   T x   c h a n n e l   :   u s e   b l o c k i n g   D M A   A b o r t   A P I   ( n o   c a l l b a c k )   * /  
         i f   ( h i r d a - > h d m a t x   ! =   N U L L )  
         {  
             / *   S e t   t h e   I R D A   D M A   A b o r t   c a l l b a c k   t o   N u l l .  
                   N o   c a l l   b a c k   e x e c u t i o n   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
             h i r d a - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
             H A L _ D M A _ A b o r t ( h i r d a - > h d m a t x ) ;  
         }  
     }  
  
     / *   R e s e t   T x   t r a n s f e r   c o u n t e r   * /  
     h i r d a - > T x X f e r C o u n t   =   0 x 0 0 U ;  
  
     / *   R e s t o r e   h i r d a - > g S t a t e   t o   R e a d y   * /  
     h i r d a - > g S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     A b o r t   o n g o i n g   R e c e i v e   t r a n s f e r   ( b l o c k i n g   m o d e ) .  
     *   @ p a r a m     h i r d a   I R D A   h a n d l e .  
     *   @ n o t e       T h i s   p r o c e d u r e   c o u l d   b e   u s e d   f o r   a b o r t i n g   a n y   o n g o i n g   t r a n s f e r   s t a r t e d   i n   I n t e r r u p t   o r   D M A   m o d e .  
     *                   T h i s   p r o c e d u r e   p e r f o r m s   f o l l o w i n g   o p e r a t i o n s   :  
     *                       -   D i s a b l e   P P P   I n t e r r u p t s  
     *                       -   D i s a b l e   t h e   D M A   t r a n s f e r   i n   t h e   p e r i p h e r a l   r e g i s t e r   ( i f   e n a b l e d )  
     *                       -   A b o r t   D M A   t r a n s f e r   b y   c a l l i n g   H A L _ D M A _ A b o r t   ( i n   c a s e   o f   t r a n s f e r   i n   D M A   m o d e )  
     *                       -   S e t   h a n d l e   S t a t e   t o   R E A D Y  
     *   @ n o t e       T h i s   p r o c e d u r e   i s   e x e c u t e d   i n   b l o c k i n g   m o d e   :   w h e n   e x i t i n g   f u n c t i o n ,   A b o r t   i s   c o n s i d e r e d   a s   c o m p l e t e d .  
     *   @ r e t v a l   H A L   s t a t u s  
 * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I R D A _ A b o r t R e c e i v e ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   D i s a b l e   R X N E ,   P E   a n d   E R R   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ R X N E I E   |   U S A R T _ C R 1 _ P E I E ) ) ;  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
     / *   D i s a b l e   t h e   I R D A   D M A   R x   r e q u e s t   i f   e n a b l e d   * /  
     i f   ( H A L _ I S _ B I T _ S E T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) )  
     {  
         C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
         / *   A b o r t   t h e   I R D A   D M A   R x   c h a n n e l   :   u s e   b l o c k i n g   D M A   A b o r t   A P I   ( n o   c a l l b a c k )   * /  
         i f   ( h i r d a - > h d m a r x   ! =   N U L L )  
         {  
             / *   S e t   t h e   I R D A   D M A   A b o r t   c a l l b a c k   t o   N u l l .  
                   N o   c a l l   b a c k   e x e c u t i o n   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
             h i r d a - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
             H A L _ D M A _ A b o r t ( h i r d a - > h d m a r x ) ;  
         }  
     }  
  
     / *   R e s e t   R x   t r a n s f e r   c o u n t e r   * /  
     h i r d a - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
     / *   R e s t o r e   h i r d a - > R x S t a t e   t o   R e a d y   * /  
     h i r d a - > R x S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     A b o r t   o n g o i n g   t r a n s f e r s   ( I n t e r r u p t   m o d e ) .  
     *   @ p a r a m     h i r d a   I R D A   h a n d l e .  
     *   @ n o t e       T h i s   p r o c e d u r e   c o u l d   b e   u s e d   f o r   a b o r t i n g   a n y   o n g o i n g   t r a n s f e r   s t a r t e d   i n   I n t e r r u p t   o r   D M A   m o d e .  
     *                   T h i s   p r o c e d u r e   p e r f o r m s   f o l l o w i n g   o p e r a t i o n s   :  
     *                       -   D i s a b l e   P P P   I n t e r r u p t s  
     *                       -   D i s a b l e   t h e   D M A   t r a n s f e r   i n   t h e   p e r i p h e r a l   r e g i s t e r   ( i f   e n a b l e d )  
     *                       -   A b o r t   D M A   t r a n s f e r   b y   c a l l i n g   H A L _ D M A _ A b o r t _ I T   ( i n   c a s e   o f   t r a n s f e r   i n   D M A   m o d e )  
     *                       -   S e t   h a n d l e   S t a t e   t o   R E A D Y  
     *                       -   A t   a b o r t   c o m p l e t i o n ,   c a l l   u s e r   a b o r t   c o m p l e t e   c a l l b a c k  
     *   @ n o t e       T h i s   p r o c e d u r e   i s   e x e c u t e d   i n   I n t e r r u p t   m o d e ,   m e a n i n g   t h a t   a b o r t   p r o c e d u r e   c o u l d   b e  
     *                   c o n s i d e r e d   a s   c o m p l e t e d   o n l y   w h e n   u s e r   a b o r t   c o m p l e t e   c a l l b a c k   i s   e x e c u t e d   ( n o t   w h e n   e x i t i n g   f u n c t i o n ) .  
     *   @ r e t v a l   H A L   s t a t u s  
 * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I R D A _ A b o r t _ I T ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     u i n t 3 2 _ t   A b o r t C p l t   =   0 x 0 1 U ;  
  
     / *   D i s a b l e   T X E I E ,   T C I E ,   R X N E ,   P E   a n d   E R R   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ R X N E I E   |   U S A R T _ C R 1 _ P E I E   |   U S A R T _ C R 1 _ T X E I E   |   U S A R T _ C R 1 _ T C I E ) ) ;  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
     / *   I f   D M A   T x   a n d / o r   D M A   R x   H a n d l e s   a r e   a s s o c i a t e d   t o   I R D A   H a n d l e ,   D M A   A b o r t   c o m p l e t e   c a l l b a c k s   s h o u l d   b e   i n i t i a l i s e d  
           b e f o r e   a n y   c a l l   t o   D M A   A b o r t   f u n c t i o n s   * /  
     / *   D M A   T x   H a n d l e   i s   v a l i d   * /  
     i f   ( h i r d a - > h d m a t x   ! =   N U L L )  
     {  
         / *   S e t   D M A   A b o r t   C o m p l e t e   c a l l b a c k   i f   I R D A   D M A   T x   r e q u e s t   i f   e n a b l e d .  
               O t h e r w i s e ,   s e t   i t   t o   N U L L   * /  
         i f   ( H A L _ I S _ B I T _ S E T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) )  
         {  
             h i r d a - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   I R D A _ D M A T x A b o r t C a l l b a c k ;  
         }  
         e l s e  
         {  
             h i r d a - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
         }  
     }  
     / *   D M A   R x   H a n d l e   i s   v a l i d   * /  
     i f   ( h i r d a - > h d m a r x   ! =   N U L L )  
     {  
         / *   S e t   D M A   A b o r t   C o m p l e t e   c a l l b a c k   i f   I R D A   D M A   R x   r e q u e s t   i f   e n a b l e d .  
               O t h e r w i s e ,   s e t   i t   t o   N U L L   * /  
         i f   ( H A L _ I S _ B I T _ S E T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) )  
         {  
             h i r d a - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   I R D A _ D M A R x A b o r t C a l l b a c k ;  
         }  
         e l s e  
         {  
             h i r d a - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
         }  
     }  
  
     / *   D i s a b l e   t h e   I R D A   D M A   T x   r e q u e s t   i f   e n a b l e d   * /  
     i f   ( H A L _ I S _ B I T _ S E T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) )  
     {  
         / *   D i s a b l e   D M A   T x   a t   I R D A   l e v e l   * /  
         C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
         / *   A b o r t   t h e   I R D A   D M A   T x   c h a n n e l   :   u s e   n o n   b l o c k i n g   D M A   A b o r t   A P I   ( c a l l b a c k )   * /  
         i f   ( h i r d a - > h d m a t x   ! =   N U L L )  
         {  
             / *   I R D A   T x   D M A   A b o r t   c a l l b a c k   h a s   a l r e a d y   b e e n   i n i t i a l i s e d   :  
                   w i l l   l e a d   t o   c a l l   H A L _ I R D A _ A b o r t C p l t C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
  
             / *   A b o r t   D M A   T X   * /  
             i f   ( H A L _ D M A _ A b o r t _ I T ( h i r d a - > h d m a t x )   ! =   H A L _ O K )  
             {  
                 h i r d a - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
             }  
             e l s e  
             {  
                 A b o r t C p l t   =   0 x 0 0 U ;  
             }  
         }  
     }  
  
     / *   D i s a b l e   t h e   I R D A   D M A   R x   r e q u e s t   i f   e n a b l e d   * /  
     i f   ( H A L _ I S _ B I T _ S E T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) )  
     {  
         C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
         / *   A b o r t   t h e   I R D A   D M A   R x   c h a n n e l   :   u s e   n o n   b l o c k i n g   D M A   A b o r t   A P I   ( c a l l b a c k )   * /  
         i f   ( h i r d a - > h d m a r x   ! =   N U L L )  
         {  
             / *   I R D A   R x   D M A   A b o r t   c a l l b a c k   h a s   a l r e a d y   b e e n   i n i t i a l i s e d   :  
                   w i l l   l e a d   t o   c a l l   H A L _ I R D A _ A b o r t C p l t C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
  
             / *   A b o r t   D M A   R X   * /  
             i f   ( H A L _ D M A _ A b o r t _ I T ( h i r d a - > h d m a r x )   ! =   H A L _ O K )  
             {  
                 h i r d a - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
                 A b o r t C p l t   =   0 x 0 1 U ;  
             }  
             e l s e  
             {  
                 A b o r t C p l t   =   0 x 0 0 U ;  
             }  
         }  
     }  
  
     / *   i f   n o   D M A   a b o r t   c o m p l e t e   c a l l b a c k   e x e c u t i o n   i s   r e q u i r e d   = >   c a l l   u s e r   A b o r t   C o m p l e t e   c a l l b a c k   * /  
     i f   ( A b o r t C p l t   = =   0 x 0 1 U )  
     {  
         / *   R e s e t   T x   a n d   R x   t r a n s f e r   c o u n t e r s   * /  
         h i r d a - > T x X f e r C o u n t   =   0 x 0 0 U ;  
         h i r d a - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
         / *   R e s e t   E r r o r C o d e   * /  
         h i r d a - > E r r o r C o d e   =   H A L _ I R D A _ E R R O R _ N O N E ;  
  
         / *   R e s t o r e   h i r d a - > g S t a t e   a n d   h i r d a - > R x S t a t e   t o   R e a d y   * /  
         h i r d a - > g S t a t e     =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
         h i r d a - > R x S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
  
         / *   A s   n o   D M A   t o   b e   a b o r t e d ,   c a l l   d i r e c t l y   u s e r   A b o r t   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         / *   C a l l   r e g i s t e r e d   A b o r t   c o m p l e t e   c a l l b a c k   * /  
         h i r d a - > A b o r t C p l t C a l l b a c k ( h i r d a ) ;  
 # e l s e  
         / *   C a l l   l e g a c y   w e a k   A b o r t   c o m p l e t e   c a l l b a c k   * /  
         H A L _ I R D A _ A b o r t C p l t C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K   * /  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     A b o r t   o n g o i n g   T r a n s m i t   t r a n s f e r   ( I n t e r r u p t   m o d e ) .  
     *   @ p a r a m     h i r d a   I R D A   h a n d l e .  
     *   @ n o t e       T h i s   p r o c e d u r e   c o u l d   b e   u s e d   f o r   a b o r t i n g   a n y   o n g o i n g   t r a n s f e r   s t a r t e d   i n   I n t e r r u p t   o r   D M A   m o d e .  
     *                   T h i s   p r o c e d u r e   p e r f o r m s   f o l l o w i n g   o p e r a t i o n s   :  
     *                       -   D i s a b l e   I R D A   I n t e r r u p t s   ( T x )  
     *                       -   D i s a b l e   t h e   D M A   t r a n s f e r   i n   t h e   p e r i p h e r a l   r e g i s t e r   ( i f   e n a b l e d )  
     *                       -   A b o r t   D M A   t r a n s f e r   b y   c a l l i n g   H A L _ D M A _ A b o r t _ I T   ( i n   c a s e   o f   t r a n s f e r   i n   D M A   m o d e )  
     *                       -   S e t   h a n d l e   S t a t e   t o   R E A D Y  
     *                       -   A t   a b o r t   c o m p l e t i o n ,   c a l l   u s e r   a b o r t   c o m p l e t e   c a l l b a c k  
     *   @ n o t e       T h i s   p r o c e d u r e   i s   e x e c u t e d   i n   I n t e r r u p t   m o d e ,   m e a n i n g   t h a t   a b o r t   p r o c e d u r e   c o u l d   b e  
     *                   c o n s i d e r e d   a s   c o m p l e t e d   o n l y   w h e n   u s e r   a b o r t   c o m p l e t e   c a l l b a c k   i s   e x e c u t e d   ( n o t   w h e n   e x i t i n g   f u n c t i o n ) .  
     *   @ r e t v a l   H A L   s t a t u s  
 * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I R D A _ A b o r t T r a n s m i t _ I T ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   D i s a b l e   T X E I E   a n d   T C I E   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ T X E I E   |   U S A R T _ C R 1 _ T C I E ) ) ;  
  
     / *   D i s a b l e   t h e   I R D A   D M A   T x   r e q u e s t   i f   e n a b l e d   * /  
     i f   ( H A L _ I S _ B I T _ S E T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) )  
     {  
         C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
         / *   A b o r t   t h e   I R D A   D M A   T x   c h a n n e l   :   u s e   n o n   b l o c k i n g   D M A   A b o r t   A P I   ( c a l l b a c k )   * /  
         i f   ( h i r d a - > h d m a t x   ! =   N U L L )  
         {  
             / *   S e t   t h e   I R D A   D M A   A b o r t   c a l l b a c k   :  
                   w i l l   l e a d   t o   c a l l   H A L _ I R D A _ A b o r t C p l t C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
             h i r d a - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   I R D A _ D M A T x O n l y A b o r t C a l l b a c k ;  
  
             / *   A b o r t   D M A   T X   * /  
             i f   ( H A L _ D M A _ A b o r t _ I T ( h i r d a - > h d m a t x )   ! =   H A L _ O K )  
             {  
                 / *   C a l l   D i r e c t l y   h i r d a - > h d m a t x - > X f e r A b o r t C a l l b a c k   f u n c t i o n   i n   c a s e   o f   e r r o r   * /  
                 h i r d a - > h d m a t x - > X f e r A b o r t C a l l b a c k ( h i r d a - > h d m a t x ) ;  
             }  
         }  
         e l s e  
         {  
             / *   R e s e t   T x   t r a n s f e r   c o u n t e r   * /  
             h i r d a - > T x X f e r C o u n t   =   0 x 0 0 U ;  
  
             / *   R e s t o r e   h i r d a - > g S t a t e   t o   R e a d y   * /  
             h i r d a - > g S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
  
             / *   A s   n o   D M A   t o   b e   a b o r t e d ,   c a l l   d i r e c t l y   u s e r   A b o r t   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             / *   C a l l   r e g i s t e r e d   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k   * /  
             h i r d a - > A b o r t T r a n s m i t C p l t C a l l b a c k ( h i r d a ) ;  
 # e l s e  
             / *   C a l l   l e g a c y   w e a k   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k   * /  
             H A L _ I R D A _ A b o r t T r a n s m i t C p l t C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K   * /  
         }  
     }  
     e l s e  
     {  
         / *   R e s e t   T x   t r a n s f e r   c o u n t e r   * /  
         h i r d a - > T x X f e r C o u n t   =   0 x 0 0 U ;  
  
         / *   R e s t o r e   h i r d a - > g S t a t e   t o   R e a d y   * /  
         h i r d a - > g S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
  
         / *   A s   n o   D M A   t o   b e   a b o r t e d ,   c a l l   d i r e c t l y   u s e r   A b o r t   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         / *   C a l l   r e g i s t e r e d   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k   * /  
         h i r d a - > A b o r t T r a n s m i t C p l t C a l l b a c k ( h i r d a ) ;  
 # e l s e  
         / *   C a l l   l e g a c y   w e a k   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k   * /  
         H A L _ I R D A _ A b o r t T r a n s m i t C p l t C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K   * /  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     A b o r t   o n g o i n g   R e c e i v e   t r a n s f e r   ( I n t e r r u p t   m o d e ) .  
     *   @ p a r a m     h i r d a   I R D A   h a n d l e .  
     *   @ n o t e       T h i s   p r o c e d u r e   c o u l d   b e   u s e d   f o r   a b o r t i n g   a n y   o n g o i n g   t r a n s f e r   s t a r t e d   i n   I n t e r r u p t   o r   D M A   m o d e .  
     *                   T h i s   p r o c e d u r e   p e r f o r m s   f o l l o w i n g   o p e r a t i o n s   :  
     *                       -   D i s a b l e   P P P   I n t e r r u p t s  
     *                       -   D i s a b l e   t h e   D M A   t r a n s f e r   i n   t h e   p e r i p h e r a l   r e g i s t e r   ( i f   e n a b l e d )  
     *                       -   A b o r t   D M A   t r a n s f e r   b y   c a l l i n g   H A L _ D M A _ A b o r t _ I T   ( i n   c a s e   o f   t r a n s f e r   i n   D M A   m o d e )  
     *                       -   S e t   h a n d l e   S t a t e   t o   R E A D Y  
     *                       -   A t   a b o r t   c o m p l e t i o n ,   c a l l   u s e r   a b o r t   c o m p l e t e   c a l l b a c k  
     *   @ n o t e       T h i s   p r o c e d u r e   i s   e x e c u t e d   i n   I n t e r r u p t   m o d e ,   m e a n i n g   t h a t   a b o r t   p r o c e d u r e   c o u l d   b e  
     *                   c o n s i d e r e d   a s   c o m p l e t e d   o n l y   w h e n   u s e r   a b o r t   c o m p l e t e   c a l l b a c k   i s   e x e c u t e d   ( n o t   w h e n   e x i t i n g   f u n c t i o n ) .  
     *   @ r e t v a l   H A L   s t a t u s  
 * /  
 H A L _ S t a t u s T y p e D e f   H A L _ I R D A _ A b o r t R e c e i v e _ I T ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   D i s a b l e   R X N E ,   P E   a n d   E R R   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ R X N E I E   |   U S A R T _ C R 1 _ P E I E ) ) ;  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
     / *   D i s a b l e   t h e   I R D A   D M A   R x   r e q u e s t   i f   e n a b l e d   * /  
     i f   ( H A L _ I S _ B I T _ S E T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) )  
     {  
         C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
         / *   A b o r t   t h e   I R D A   D M A   R x   c h a n n e l   :   u s e   n o n   b l o c k i n g   D M A   A b o r t   A P I   ( c a l l b a c k )   * /  
         i f   ( h i r d a - > h d m a r x   ! =   N U L L )  
         {  
             / *   S e t   t h e   I R D A   D M A   A b o r t   c a l l b a c k   :  
                   w i l l   l e a d   t o   c a l l   H A L _ I R D A _ A b o r t C p l t C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
             h i r d a - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   I R D A _ D M A R x O n l y A b o r t C a l l b a c k ;  
  
             / *   A b o r t   D M A   R X   * /  
             i f   ( H A L _ D M A _ A b o r t _ I T ( h i r d a - > h d m a r x )   ! =   H A L _ O K )  
             {  
                 / *   C a l l   D i r e c t l y   h i r d a - > h d m a r x - > X f e r A b o r t C a l l b a c k   f u n c t i o n   i n   c a s e   o f   e r r o r   * /  
                 h i r d a - > h d m a r x - > X f e r A b o r t C a l l b a c k ( h i r d a - > h d m a r x ) ;  
             }  
         }  
         e l s e  
         {  
             / *   R e s e t   R x   t r a n s f e r   c o u n t e r   * /  
             h i r d a - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
             / *   R e s t o r e   h i r d a - > R x S t a t e   t o   R e a d y   * /  
             h i r d a - > R x S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
  
             / *   A s   n o   D M A   t o   b e   a b o r t e d ,   c a l l   d i r e c t l y   u s e r   A b o r t   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             / *   C a l l   r e g i s t e r e d   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k   * /  
             h i r d a - > A b o r t R e c e i v e C p l t C a l l b a c k ( h i r d a ) ;  
 # e l s e  
             / *   C a l l   l e g a c y   w e a k   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k   * /  
             H A L _ I R D A _ A b o r t R e c e i v e C p l t C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K   * /  
         }  
     }  
     e l s e  
     {  
         / *   R e s e t   R x   t r a n s f e r   c o u n t e r   * /  
         h i r d a - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
         / *   R e s t o r e   h i r d a - > R x S t a t e   t o   R e a d y   * /  
         h i r d a - > R x S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
  
         / *   A s   n o   D M A   t o   b e   a b o r t e d ,   c a l l   d i r e c t l y   u s e r   A b o r t   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         / *   C a l l   r e g i s t e r e d   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k   * /  
         h i r d a - > A b o r t R e c e i v e C p l t C a l l b a c k ( h i r d a ) ;  
 # e l s e  
         / *   C a l l   l e g a c y   w e a k   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k   * /  
         H A L _ I R D A _ A b o r t R e c e i v e C p l t C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K   * /  
     }  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   I R D A   i n t e r r u p t   r e q u e s t .  
     *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 v o i d   H A L _ I R D A _ I R Q H a n d l e r ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     u i n t 3 2 _ t   i s r f l a g s       =   R E A D _ R E G ( h i r d a - > I n s t a n c e - > S R ) ;  
     u i n t 3 2 _ t   c r 1 i t s           =   R E A D _ R E G ( h i r d a - > I n s t a n c e - > C R 1 ) ;  
     u i n t 3 2 _ t   c r 3 i t s           =   R E A D _ R E G ( h i r d a - > I n s t a n c e - > C R 3 ) ;  
     u i n t 3 2 _ t   e r r o r f l a g s   =   0 x 0 0 U ;  
     u i n t 3 2 _ t   d m a r e q u e s t   =   0 x 0 0 U ;  
  
     / *   I f   n o   e r r o r   o c c u r s   * /  
     e r r o r f l a g s   =   ( i s r f l a g s   &   ( u i n t 3 2 _ t ) ( U S A R T _ S R _ P E   |   U S A R T _ S R _ F E   |   U S A R T _ S R _ O R E   |   U S A R T _ S R _ N E ) ) ;  
     i f   ( e r r o r f l a g s   = =   R E S E T )  
     {  
         / *   I R D A   i n   m o d e   R e c e i v e r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f   ( ( ( i s r f l a g s   &   U S A R T _ S R _ R X N E )   ! =   R E S E T )   & &   ( ( c r 1 i t s   &   U S A R T _ C R 1 _ R X N E I E )   ! =   R E S E T ) )  
         {  
             I R D A _ R e c e i v e _ I T ( h i r d a ) ;  
             r e t u r n ;  
         }  
     }  
  
     / *   I f   s o m e   e r r o r s   o c c u r   * /  
     i f   ( ( e r r o r f l a g s   ! =   R E S E T )   & &   ( ( ( c r 3 i t s   &   U S A R T _ C R 3 _ E I E )   ! =   R E S E T )   | |   ( ( c r 1 i t s   &   ( U S A R T _ C R 1 _ R X N E I E   |   U S A R T _ C R 1 _ P E I E ) )   ! =   R E S E T ) ) )  
     {  
         / *   I R D A   p a r i t y   e r r o r   i n t e r r u p t   o c c u r r e d   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f   ( ( ( i s r f l a g s   &   U S A R T _ S R _ P E )   ! =   R E S E T )   & &   ( ( c r 1 i t s   &   U S A R T _ C R 1 _ P E I E )   ! =   R E S E T ) )  
         {  
             h i r d a - > E r r o r C o d e   | =   H A L _ I R D A _ E R R O R _ P E ;  
         }  
  
         / *   I R D A   n o i s e   e r r o r   i n t e r r u p t   o c c u r r e d   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f   ( ( ( i s r f l a g s   &   U S A R T _ S R _ N E )   ! =   R E S E T )   & &   ( ( c r 3 i t s   &   U S A R T _ C R 3 _ E I E )   ! =   R E S E T ) )  
         {  
             h i r d a - > E r r o r C o d e   | =   H A L _ I R D A _ E R R O R _ N E ;  
         }  
  
         / *   I R D A   f r a m e   e r r o r   i n t e r r u p t   o c c u r r e d   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f   ( ( ( i s r f l a g s   &   U S A R T _ S R _ F E )   ! =   R E S E T )   & &   ( ( c r 3 i t s   &   U S A R T _ C R 3 _ E I E )   ! =   R E S E T ) )  
         {  
             h i r d a - > E r r o r C o d e   | =   H A L _ I R D A _ E R R O R _ F E ;  
         }  
  
         / *   I R D A   O v e r - R u n   i n t e r r u p t   o c c u r r e d   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f   ( ( ( i s r f l a g s   &   U S A R T _ S R _ O R E )   ! =   R E S E T )   & &   ( ( ( c r 1 i t s   &   U S A R T _ C R 1 _ R X N E I E )   ! =   R E S E T )   | |   ( ( c r 3 i t s   &   U S A R T _ C R 3 _ E I E )   ! =   R E S E T ) ) )  
         {  
             h i r d a - > E r r o r C o d e   | =   H A L _ I R D A _ E R R O R _ O R E ;  
         }  
         / *   C a l l   I R D A   E r r o r   C a l l   b a c k   f u n c t i o n   i f   n e e d   b e   - - - - - - - - - - - - - - - - - - - - - - - * /  
         i f   ( h i r d a - > E r r o r C o d e   ! =   H A L _ I R D A _ E R R O R _ N O N E )  
         {  
             / *   I R D A   i n   m o d e   R e c e i v e r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
             i f   ( ( ( i s r f l a g s   &   U S A R T _ S R _ R X N E )   ! =   R E S E T )   & &   ( ( c r 1 i t s   &   U S A R T _ C R 1 _ R X N E I E )   ! =   R E S E T ) )  
             {  
                 I R D A _ R e c e i v e _ I T ( h i r d a ) ;  
             }  
  
             / *   I f   O v e r r u n   e r r o r   o c c u r s ,   o r   i f   a n y   e r r o r   o c c u r s   i n   D M A   m o d e   r e c e p t i o n ,  
                   c o n s i d e r   e r r o r   a s   b l o c k i n g   * /  
             d m a r e q u e s t   =   H A L _ I S _ B I T _ S E T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
             i f   ( ( ( h i r d a - > E r r o r C o d e   &   H A L _ I R D A _ E R R O R _ O R E )   ! =   R E S E T )   | |   d m a r e q u e s t )  
             {  
                 / *   B l o c k i n g   e r r o r   :   t r a n s f e r   i s   a b o r t e d  
                       S e t   t h e   I R D A   s t a t e   r e a d y   t o   b e   a b l e   t o   s t a r t   a g a i n   t h e   p r o c e s s ,  
                       D i s a b l e   R x   I n t e r r u p t s ,   a n d   d i s a b l e   R x   D M A   r e q u e s t ,   i f   o n g o i n g   * /  
                 I R D A _ E n d R x T r a n s f e r ( h i r d a ) ;  
  
                 / *   D i s a b l e   t h e   I R D A   D M A   R x   r e q u e s t   i f   e n a b l e d   * /  
                 i f   ( H A L _ I S _ B I T _ S E T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) )  
                 {  
                     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
                     / *   A b o r t   t h e   I R D A   D M A   R x   c h a n n e l   * /  
                     i f   ( h i r d a - > h d m a r x   ! =   N U L L )  
                     {  
                         / *   S e t   t h e   I R D A   D M A   A b o r t   c a l l b a c k   :  
                         w i l l   l e a d   t o   c a l l   H A L _ I R D A _ E r r o r C a l l b a c k ( )   a t   e n d   o f   D M A   a b o r t   p r o c e d u r e   * /  
                         h i r d a - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   I R D A _ D M A A b o r t O n E r r o r ;  
  
                         / *   A b o r t   D M A   R X   * /  
                         i f   ( H A L _ D M A _ A b o r t _ I T ( h i r d a - > h d m a r x )   ! =   H A L _ O K )  
                         {  
                             / *   C a l l   D i r e c t l y   X f e r A b o r t C a l l b a c k   f u n c t i o n   i n   c a s e   o f   e r r o r   * /  
                             h i r d a - > h d m a r x - > X f e r A b o r t C a l l b a c k ( h i r d a - > h d m a r x ) ;  
                         }  
                     }  
                     e l s e  
                     {  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                         / *   C a l l   r e g i s t e r e d   u s e r   e r r o r   c a l l b a c k   * /  
                         h i r d a - > E r r o r C a l l b a c k ( h i r d a ) ;  
 # e l s e  
                         / *   C a l l   l e g a c y   w e a k   u s e r   e r r o r   c a l l b a c k   * /  
                         H A L _ I R D A _ E r r o r C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K   * /  
                     }  
                 }  
                 e l s e  
                 {  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                     / *   C a l l   r e g i s t e r e d   u s e r   e r r o r   c a l l b a c k   * /  
                     h i r d a - > E r r o r C a l l b a c k ( h i r d a ) ;  
 # e l s e  
                     / *   C a l l   l e g a c y   w e a k   u s e r   e r r o r   c a l l b a c k   * /  
                     H A L _ I R D A _ E r r o r C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K   * /  
                 }  
             }  
             e l s e  
             {  
                 / *   N o n   B l o c k i n g   e r r o r   :   t r a n s f e r   c o u l d   g o   o n .  
                       E r r o r   i s   n o t i f i e d   t o   u s e r   t h r o u g h   u s e r   e r r o r   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
                 / *   C a l l   r e g i s t e r e d   u s e r   e r r o r   c a l l b a c k   * /  
                 h i r d a - > E r r o r C a l l b a c k ( h i r d a ) ;  
 # e l s e  
                 / *   C a l l   l e g a c y   w e a k   u s e r   e r r o r   c a l l b a c k   * /  
                 H A L _ I R D A _ E r r o r C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K   * /  
  
                 h i r d a - > E r r o r C o d e   =   H A L _ I R D A _ E R R O R _ N O N E ;  
             }  
         }  
         r e t u r n ;  
     }   / *   E n d   i f   s o m e   e r r o r   o c c u r s   * /  
  
     / *   I R D A   i n   m o d e   T r a n s m i t t e r   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( ( i s r f l a g s   &   U S A R T _ S R _ T X E )   ! =   R E S E T )   & &   ( ( c r 1 i t s   &   U S A R T _ C R 1 _ T X E I E )   ! =   R E S E T ) )  
     {  
         I R D A _ T r a n s m i t _ I T ( h i r d a ) ;  
         r e t u r n ;  
     }  
  
     / *   I R D A   i n   m o d e   T r a n s m i t t e r   e n d   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f   ( ( ( i s r f l a g s   &   U S A R T _ S R _ T C )   ! =   R E S E T )   & &   ( ( c r 1 i t s   &   U S A R T _ C R 1 _ T C I E )   ! =   R E S E T ) )  
     {  
         I R D A _ E n d T r a n s m i t _ I T ( h i r d a ) ;  
         r e t u r n ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     T x   T r a n s f e r   c o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I R D A _ T x C p l t C a l l b a c k ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i r d a ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I R D A _ T x C p l t C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     T x   H a l f   T r a n s f e r   c o m p l e t e d   c a l l b a c k .  
     *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   U S A R T   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I R D A _ T x H a l f C p l t C a l l b a c k ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i r d a ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I R D A _ T x H a l f C p l t C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     R x   T r a n s f e r   c o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I R D A _ R x C p l t C a l l b a c k ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i r d a ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I R D A _ R x C p l t C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     R x   H a l f   T r a n s f e r   c o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I R D A _ R x H a l f C p l t C a l l b a c k ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i r d a ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I R D A _ R x H a l f C p l t C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     I R D A   e r r o r   c a l l b a c k .  
     *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I R D A _ E r r o r C a l l b a c k ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i r d a ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I R D A _ E r r o r C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     I R D A   A b o r t   C o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h i r d a   P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I R D A _ A b o r t C p l t C a l l b a c k ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i r d a ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I R D A _ A b o r t C p l t C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     I R D A   A b o r t   T r a n s m i t   C o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h i r d a   P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I R D A _ A b o r t T r a n s m i t C p l t C a l l b a c k ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i r d a ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I R D A _ A b o r t T r a n s m i t C p l t C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
       * /  
 }  
  
 / * *  
     *   @ b r i e f     I R D A   A b o r t   R e c e i v e   C o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h i r d a   P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 _ _ w e a k   v o i d   H A L _ I R D A _ A b o r t R e c e i v e C p l t C a l l b a c k ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   P r e v e n t   u n u s e d   a r g u m e n t ( s )   c o m p i l a t i o n   w a r n i n g   * /  
     U N U S E D ( h i r d a ) ;  
  
     / *   N O T E   :   T h i s   f u n c t i o n   s h o u l d   n o t   b e   m o d i f i e d ,   w h e n   t h e   c a l l b a c k   i s   n e e d e d ,  
                         t h e   H A L _ I R D A _ A b o r t R e c e i v e C p l t C a l l b a c k   c a n   b e   i m p l e m e n t e d   i n   t h e   u s e r   f i l e .  
       * /  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   I R D A _ E x p o r t e d _ F u n c t i o n s _ G r o u p 3   P e r i p h e r a l   S t a t e   a n d   E r r o r s   f u n c t i o n s  
     *     @ b r i e f       I R D A   S t a t e   a n d   E r r o r s   f u n c t i o n s  
     *  
 @ v e r b a t i m  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
                                     # # # # #   P e r i p h e r a l   S t a t e   a n d   E r r o r s   f u n c t i o n s   # # # # #  
     = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  
     [ . . ]  
         T h i s   s u b s e c t i o n   p r o v i d e s   a   s e t   o f   f u n c t i o n s   a l l o w i n g   t o   r e t u r n   t h e   S t a t e   o f   I r D A  
         c o m m u n i c a t i o n   p r o c e s s   a n d   a l s o   r e t u r n   P e r i p h e r a l   E r r o r s   o c c u r r e d   d u r i n g   c o m m u n i c a t i o n   p r o c e s s  
           ( + )   H A L _ I R D A _ G e t S t a t e ( )   A P I   c a n   b e   h e l p f u l   t o   c h e c k   i n   r u n - t i m e   t h e   s t a t e   o f   t h e   I r D A   p e r i p h e r a l .  
           ( + )   H A L _ I R D A _ G e t E r r o r ( )   c h e c k   i n   r u n - t i m e   e r r o r s   t h a t   c o u l d   b e   o c c u r r e d   d u r i n g   c o m m u n i c a t i o n .  
  
 @ e n d v e r b a t i m  
     *   @ {  
     * /  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   I R D A   s t a t e .  
     *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A .  
     *   @ r e t v a l   H A L   s t a t e  
     * /  
 H A L _ I R D A _ S t a t e T y p e D e f   H A L _ I R D A _ G e t S t a t e ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     u i n t 3 2 _ t   t e m p 1   =   0 x 0 0 U ,   t e m p 2   =   0 x 0 0 U ;  
     t e m p 1   =   h i r d a - > g S t a t e ;  
     t e m p 2   =   h i r d a - > R x S t a t e ;  
  
     r e t u r n   ( H A L _ I R D A _ S t a t e T y p e D e f ) ( t e m p 1   |   t e m p 2 ) ;  
 }  
  
 / * *  
     *   @ b r i e f     R e t u r n   t h e   I R D A   e r r o r   c o d e  
     *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                             t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A .  
     *   @ r e t v a l   I R D A   E r r o r   C o d e  
     * /  
 u i n t 3 2 _ t   H A L _ I R D A _ G e t E r r o r ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     r e t u r n   h i r d a - > E r r o r C o d e ;  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * *   @ d e f g r o u p   I R D A _ P r i v a t e _ F u n c t i o n s   I R D A   P r i v a t e   F u n c t i o n s  
     *   @ {  
     * /  
  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
 / * *  
     *   @ b r i e f     I n i t i a l i z e   t h e   c a l l b a c k s   t o   t h e i r   d e f a u l t   v a l u e s .  
     *   @ p a r a m     h i r d a   I R D A   h a n d l e .  
     *   @ r e t v a l   n o n e  
     * /  
 v o i d   I R D A _ I n i t C a l l b a c k s T o D e f a u l t ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   I n i t   t h e   I R D A   C a l l b a c k   s e t t i n g s   * /  
     h i r d a - > T x H a l f C p l t C a l l b a c k                 =   H A L _ I R D A _ T x H a l f C p l t C a l l b a c k ;                 / *   L e g a c y   w e a k   T x H a l f C p l t C a l l b a c k                 * /  
     h i r d a - > T x C p l t C a l l b a c k                         =   H A L _ I R D A _ T x C p l t C a l l b a c k ;                         / *   L e g a c y   w e a k   T x C p l t C a l l b a c k                         * /  
     h i r d a - > R x H a l f C p l t C a l l b a c k                 =   H A L _ I R D A _ R x H a l f C p l t C a l l b a c k ;                 / *   L e g a c y   w e a k   R x H a l f C p l t C a l l b a c k                 * /  
     h i r d a - > R x C p l t C a l l b a c k                         =   H A L _ I R D A _ R x C p l t C a l l b a c k ;                         / *   L e g a c y   w e a k   R x C p l t C a l l b a c k                         * /  
     h i r d a - > E r r o r C a l l b a c k                           =   H A L _ I R D A _ E r r o r C a l l b a c k ;                           / *   L e g a c y   w e a k   E r r o r C a l l b a c k                           * /  
     h i r d a - > A b o r t C p l t C a l l b a c k                   =   H A L _ I R D A _ A b o r t C p l t C a l l b a c k ;                   / *   L e g a c y   w e a k   A b o r t C p l t C a l l b a c k                   * /  
     h i r d a - > A b o r t T r a n s m i t C p l t C a l l b a c k   =   H A L _ I R D A _ A b o r t T r a n s m i t C p l t C a l l b a c k ;   / *   L e g a c y   w e a k   A b o r t T r a n s m i t C p l t C a l l b a c k   * /  
     h i r d a - > A b o r t R e c e i v e C p l t C a l l b a c k     =   H A L _ I R D A _ A b o r t R e c e i v e C p l t C a l l b a c k ;     / *   L e g a c y   w e a k   A b o r t R e c e i v e C p l t C a l l b a c k     * /  
  
 }  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   * /  
  
 / * *  
     *   @ b r i e f     D M A   I R D A   t r a n s m i t   p r o c e s s   c o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h d m a     P o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                               t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I R D A _ D M A T r a n s m i t C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     I R D A _ H a n d l e T y p e D e f   * h i r d a   =   ( I R D A _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
     / *   D M A   N o r m a l   m o d e   * /  
     i f   ( ( h d m a - > I n s t a n c e - > C C R   &   D M A _ C C R _ C I R C )   = =   0 U )  
     {  
         h i r d a - > T x X f e r C o u n t   =   0 U ;  
  
         / *   D i s a b l e   t h e   D M A   t r a n s f e r   f o r   t r a n s m i t   r e q u e s t   b y   r e s e t t i n g   t h e   D M A T   b i t  
               i n   t h e   I R D A   C R 3   r e g i s t e r   * /  
         C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
  
         / *   E n a b l e   t h e   I R D A   T r a n s m i t   C o m p l e t e   I n t e r r u p t   * /  
         S E T _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ T C I E ) ;  
     }  
     / *   D M A   C i r c u l a r   m o d e   * /  
     e l s e  
     {  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
         / *   C a l l   r e g i s t e r e d   T x   c o m p l e t e   c a l l b a c k   * /  
         h i r d a - > T x C p l t C a l l b a c k ( h i r d a ) ;  
 # e l s e  
         / *   C a l l   l e g a c y   w e a k   T x   c o m p l e t e   c a l l b a c k   * /  
         H A L _ I R D A _ T x C p l t C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K   * /  
     }  
 }  
  
 / * *  
     *   @ b r i e f   D M A   I R D A   r e c e i v e   p r o c e s s   h a l f   c o m p l e t e   c a l l b a c k  
     *   @ p a r a m     h d m a     P o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                               t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I R D A _ D M A T r a n s m i t H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     I R D A _ H a n d l e T y p e D e f   * h i r d a   =   ( I R D A _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   T x   H a l f   c o m p l e t e   c a l l b a c k   * /  
     h i r d a - > T x H a l f C p l t C a l l b a c k ( h i r d a ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   T x   c o m p l e t e   c a l l b a c k   * /  
     H A L _ I R D A _ T x H a l f C p l t C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   I R D A   r e c e i v e   p r o c e s s   c o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h d m a     P o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                               t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I R D A _ D M A R e c e i v e C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     I R D A _ H a n d l e T y p e D e f   * h i r d a   =   ( I R D A _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
  
     / *   D M A   N o r m a l   m o d e   * /  
     i f   ( ( h d m a - > I n s t a n c e - > C C R   &   D M A _ C C R _ C I R C )   = =   0 U )  
     {  
         h i r d a - > R x X f e r C o u n t   =   0 U ;  
  
         / *   D i s a b l e   P E   a n d   E R R   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   i n t e r r u p t s   * /  
         C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ P E I E ) ;  
         C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
         / *   D i s a b l e   t h e   D M A   t r a n s f e r   f o r   t h e   r e c e i v e r   r e q u e s t   b y   r e s e t t i n g   t h e   D M A R   b i t  
               i n   t h e   I R D A   C R 3   r e g i s t e r   * /  
         C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
  
         / *   A t   e n d   o f   R x   p r o c e s s ,   r e s t o r e   h i r d a - > R x S t a t e   t o   R e a d y   * /  
         h i r d a - > R x S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
     }  
  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   R x   c o m p l e t e   c a l l b a c k   * /  
     h i r d a - > R x C p l t C a l l b a c k ( h i r d a ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   R x   c o m p l e t e   c a l l b a c k   * /  
     H A L _ I R D A _ R x C p l t C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   * /  
 }  
  
 / * *  
     *   @ b r i e f   D M A   I R D A   r e c e i v e   p r o c e s s   h a l f   c o m p l e t e   c a l l b a c k .  
     *   @ p a r a m     h d m a     P o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                               t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I R D A _ D M A R e c e i v e H a l f C p l t ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     I R D A _ H a n d l e T y p e D e f   * h i r d a   =   ( I R D A _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / * C a l l   r e g i s t e r e d   R x   H a l f   c o m p l e t e   c a l l b a c k * /  
     h i r d a - > R x H a l f C p l t C a l l b a c k ( h i r d a ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   R x   H a l f   c o m p l e t e   c a l l b a c k   * /  
     H A L _ I R D A _ R x H a l f C p l t C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   I R D A   c o m m u n i c a t i o n   e r r o r   c a l l b a c k .  
     *   @ p a r a m     h d m a     P o i n t e r   t o   a   D M A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                               t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   D M A .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I R D A _ D M A E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     u i n t 3 2 _ t   d m a r e q u e s t   =   0 x 0 0 U ;  
     I R D A _ H a n d l e T y p e D e f   * h i r d a   =   ( I R D A _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
  
     / *   S t o p   I R D A   D M A   T x   r e q u e s t   i f   o n g o i n g   * /  
     d m a r e q u e s t   =   H A L _ I S _ B I T _ S E T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A T ) ;  
     i f   ( ( h i r d a - > g S t a t e   = =   H A L _ I R D A _ S T A T E _ B U S Y _ T X )   & &   d m a r e q u e s t )  
     {  
         h i r d a - > T x X f e r C o u n t   =   0 U ;  
         I R D A _ E n d T x T r a n s f e r ( h i r d a ) ;  
     }  
  
     / *   S t o p   I R D A   D M A   R x   r e q u e s t   i f   o n g o i n g   * /  
     d m a r e q u e s t   =   H A L _ I S _ B I T _ S E T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ D M A R ) ;  
     i f   ( ( h i r d a - > R x S t a t e   = =   H A L _ I R D A _ S T A T E _ B U S Y _ R X )   & &   d m a r e q u e s t )  
     {  
         h i r d a - > R x X f e r C o u n t   =   0 U ;  
         I R D A _ E n d R x T r a n s f e r ( h i r d a ) ;  
     }  
  
     h i r d a - > E r r o r C o d e   | =   H A L _ I R D A _ E R R O R _ D M A ;  
  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   u s e r   e r r o r   c a l l b a c k   * /  
     h i r d a - > E r r o r C a l l b a c k ( h i r d a ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   u s e r   e r r o r   c a l l b a c k   * /  
     H A L _ I R D A _ E r r o r C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K   * /  
 }  
  
 / * *  
     *   @ b r i e f     T h i s   f u n c t i o n   h a n d l e s   I R D A   C o m m u n i c a t i o n   T i m e o u t .  
     *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A .  
     *   @ p a r a m     F l a g   s p e c i f i e s   t h e   I R D A   f l a g   t o   c h e c k .  
     *   @ p a r a m     S t a t u s   T h e   n e w   F l a g   s t a t u s   ( S E T   o r   R E S E T ) .  
     *   @ p a r a m     T i c k s t a r t   T i c k   s t a r t   v a l u e  
     *   @ p a r a m     T i m e o u t   T i m e o u t   d u r a t i o n  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I R D A _ W a i t O n F l a g U n t i l T i m e o u t ( I R D A _ H a n d l e T y p e D e f   * h i r d a ,   u i n t 3 2 _ t   F l a g ,   F l a g S t a t u s   S t a t u s ,   u i n t 3 2 _ t   T i c k s t a r t ,   u i n t 3 2 _ t   T i m e o u t )  
 {  
     / *   W a i t   u n t i l   f l a g   i s   s e t   * /  
     w h i l e   ( ( _ _ H A L _ I R D A _ G E T _ F L A G ( h i r d a ,   F l a g )   ?   S E T   :   R E S E T )   = =   S t a t u s )  
     {  
         / *   C h e c k   f o r   t h e   T i m e o u t   * /  
         i f   ( T i m e o u t   ! =   H A L _ M A X _ D E L A Y )  
         {  
             i f   ( ( T i m e o u t   = =   0 U )   | |   ( ( H A L _ G e t T i c k ( )   -   T i c k s t a r t )   >   T i m e o u t ) )  
             {  
                 / *   D i s a b l e   T X E ,   R X N E ,   P E   a n d   E R R   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   i n t e r r u p t s   f o r   t h e   i n t e r r u p t   p r o c e s s   * /  
                 C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ R X N E I E   |   U S A R T _ C R 1 _ P E I E   |   U S A R T _ C R 1 _ T X E I E ) ) ;  
                 C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
                 h i r d a - > g S t a t e     =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
                 h i r d a - > R x S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
  
                 / *   P r o c e s s   U n l o c k e d   * /  
                 _ _ H A L _ U N L O C K ( h i r d a ) ;  
  
                 r e t u r n   H A L _ T I M E O U T ;  
             }  
         }  
     }  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     E n d   o n g o i n g   T x   t r a n s f e r   o n   I R D A   p e r i p h e r a l   ( f o l l o w i n g   e r r o r   d e t e c t i o n   o r   T r a n s m i t   c o m p l e t i o n ) .  
     *   @ p a r a m     h i r d a   I R D A   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I R D A _ E n d T x T r a n s f e r ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   D i s a b l e   T X E I E   a n d   T C I E   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ T X E I E   |   U S A R T _ C R 1 _ T C I E ) ) ;  
  
     / *   A t   e n d   o f   T x   p r o c e s s ,   r e s t o r e   h i r d a - > g S t a t e   t o   R e a d y   * /  
     h i r d a - > g S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
 }  
  
 / * *  
     *   @ b r i e f     E n d   o n g o i n g   R x   t r a n s f e r   o n   I R D A   p e r i p h e r a l   ( f o l l o w i n g   e r r o r   d e t e c t i o n   o r   R e c e p t i o n   c o m p l e t i o n ) .  
     *   @ p a r a m     h i r d a   I R D A   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I R D A _ E n d R x T r a n s f e r ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   D i s a b l e   R X N E ,   P E   a n d   E R R   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   i n t e r r u p t s   * /  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ R X N E I E   |   U S A R T _ C R 1 _ P E I E ) ) ;  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
     / *   A t   e n d   o f   R x   p r o c e s s ,   r e s t o r e   h i r d a - > R x S t a t e   t o   R e a d y   * /  
     h i r d a - > R x S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
 }  
  
 / * *  
     *   @ b r i e f     D M A   I R D A   c o m m u n i c a t i o n   a b o r t   c a l l b a c k ,   w h e n   i n i t i a t e d   b y   H A L   s e r v i c e s   o n   E r r o r  
     *                   ( T o   b e   c a l l e d   a t   e n d   o f   D M A   A b o r t   p r o c e d u r e   f o l l o w i n g   e r r o r   o c c u r r e n c e ) .  
     *   @ p a r a m     h d m a   D M A   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I R D A _ D M A A b o r t O n E r r o r ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     I R D A _ H a n d l e T y p e D e f   * h i r d a   =   ( I R D A _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
     h i r d a - > R x X f e r C o u n t   =   0 x 0 0 U ;  
     h i r d a - > T x X f e r C o u n t   =   0 x 0 0 U ;  
  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   u s e r   e r r o r   c a l l b a c k   * /  
     h i r d a - > E r r o r C a l l b a c k ( h i r d a ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   u s e r   e r r o r   c a l l b a c k   * /  
     H A L _ I R D A _ E r r o r C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   I R D A   T x   c o m m u n i c a t i o n   a b o r t   c a l l b a c k ,   w h e n   i n i t i a t e d   b y   u s e r  
     *                   ( T o   b e   c a l l e d   a t   e n d   o f   D M A   T x   A b o r t   p r o c e d u r e   f o l l o w i n g   u s e r   a b o r t   r e q u e s t ) .  
     *   @ n o t e       W h e n   t h i s   c a l l b a c k   i s   e x e c u t e d ,   U s e r   A b o r t   c o m p l e t e   c a l l   b a c k   i s   c a l l e d   o n l y   i f   n o  
     *                   A b o r t   s t i l l   o n g o i n g   f o r   R x   D M A   H a n d l e .  
     *   @ p a r a m     h d m a   D M A   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I R D A _ D M A T x A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     I R D A _ H a n d l e T y p e D e f   * h i r d a   =   ( I R D A _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
  
     h i r d a - > h d m a t x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
     / *   C h e c k   i f   a n   A b o r t   p r o c e s s   i s   s t i l l   o n g o i n g   * /  
     i f   ( h i r d a - > h d m a r x   ! =   N U L L )  
     {  
         i f   ( h i r d a - > h d m a r x - > X f e r A b o r t C a l l b a c k   ! =   N U L L )  
         {  
             r e t u r n ;  
         }  
     }  
  
     / *   N o   A b o r t   p r o c e s s   s t i l l   o n g o i n g   :   A l l   D M A   c h a n n e l s   a r e   a b o r t e d ,   c a l l   u s e r   A b o r t   C o m p l e t e   c a l l b a c k   * /  
     h i r d a - > T x X f e r C o u n t   =   0 x 0 0 U ;  
     h i r d a - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
     / *   R e s e t   E r r o r C o d e   * /  
     h i r d a - > E r r o r C o d e   =   H A L _ I R D A _ E R R O R _ N O N E ;  
  
     / *   R e s t o r e   h i r d a - > g S t a t e   a n d   h i r d a - > R x S t a t e   t o   R e a d y   * /  
     h i r d a - > g S t a t e     =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
     h i r d a - > R x S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
  
     / *   C a l l   u s e r   A b o r t   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   A b o r t   c o m p l e t e   c a l l b a c k   * /  
     h i r d a - > A b o r t C p l t C a l l b a c k ( h i r d a ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   A b o r t   c o m p l e t e   c a l l b a c k   * /  
     H A L _ I R D A _ A b o r t C p l t C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   I R D A   R x   c o m m u n i c a t i o n   a b o r t   c a l l b a c k ,   w h e n   i n i t i a t e d   b y   u s e r  
     *                   ( T o   b e   c a l l e d   a t   e n d   o f   D M A   R x   A b o r t   p r o c e d u r e   f o l l o w i n g   u s e r   a b o r t   r e q u e s t ) .  
     *   @ n o t e       W h e n   t h i s   c a l l b a c k   i s   e x e c u t e d ,   U s e r   A b o r t   c o m p l e t e   c a l l   b a c k   i s   c a l l e d   o n l y   i f   n o  
     *                   A b o r t   s t i l l   o n g o i n g   f o r   T x   D M A   H a n d l e .  
     *   @ p a r a m     h d m a   D M A   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I R D A _ D M A R x A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     I R D A _ H a n d l e T y p e D e f   * h i r d a   =   ( I R D A _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
  
     h i r d a - > h d m a r x - > X f e r A b o r t C a l l b a c k   =   N U L L ;  
  
     / *   C h e c k   i f   a n   A b o r t   p r o c e s s   i s   s t i l l   o n g o i n g   * /  
     i f   ( h i r d a - > h d m a t x   ! =   N U L L )  
     {  
         i f   ( h i r d a - > h d m a t x - > X f e r A b o r t C a l l b a c k   ! =   N U L L )  
         {  
             r e t u r n ;  
         }  
     }  
  
     / *   N o   A b o r t   p r o c e s s   s t i l l   o n g o i n g   :   A l l   D M A   c h a n n e l s   a r e   a b o r t e d ,   c a l l   u s e r   A b o r t   C o m p l e t e   c a l l b a c k   * /  
     h i r d a - > T x X f e r C o u n t   =   0 x 0 0 U ;  
     h i r d a - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
     / *   R e s e t   E r r o r C o d e   * /  
     h i r d a - > E r r o r C o d e   =   H A L _ I R D A _ E R R O R _ N O N E ;  
  
     / *   R e s t o r e   h i r d a - > g S t a t e   a n d   h i r d a - > R x S t a t e   t o   R e a d y   * /  
     h i r d a - > g S t a t e     =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
     h i r d a - > R x S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
  
     / *   C a l l   u s e r   A b o r t   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   A b o r t   c o m p l e t e   c a l l b a c k   * /  
     h i r d a - > A b o r t C p l t C a l l b a c k ( h i r d a ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   A b o r t   c o m p l e t e   c a l l b a c k   * /  
     H A L _ I R D A _ A b o r t C p l t C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   I R D A   T x   c o m m u n i c a t i o n   a b o r t   c a l l b a c k ,   w h e n   i n i t i a t e d   b y   u s e r   b y   a   c a l l   t o  
     *                   H A L _ I R D A _ A b o r t T r a n s m i t _ I T   A P I   ( A b o r t   o n l y   T x   t r a n s f e r )  
     *                   ( T h i s   c a l l b a c k   i s   e x e c u t e d   a t   e n d   o f   D M A   T x   A b o r t   p r o c e d u r e   f o l l o w i n g   u s e r   a b o r t   r e q u e s t ,  
     *                   a n d   l e a d s   t o   u s e r   T x   A b o r t   C o m p l e t e   c a l l b a c k   e x e c u t i o n ) .  
     *   @ p a r a m     h d m a   D M A   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I R D A _ D M A T x O n l y A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     I R D A _ H a n d l e T y p e D e f   * h i r d a   =   ( I R D A _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
  
     h i r d a - > T x X f e r C o u n t   =   0 x 0 0 U ;  
  
     / *   R e s t o r e   h i r d a - > g S t a t e   t o   R e a d y   * /  
     h i r d a - > g S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
  
     / *   C a l l   u s e r   A b o r t   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k   * /  
     h i r d a - > A b o r t T r a n s m i t C p l t C a l l b a c k ( h i r d a ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   A b o r t   T r a n s m i t   C o m p l e t e   C a l l b a c k   * /  
     H A L _ I R D A _ A b o r t T r a n s m i t C p l t C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K   * /  
 }  
  
 / * *  
     *   @ b r i e f     D M A   I R D A   R x   c o m m u n i c a t i o n   a b o r t   c a l l b a c k ,   w h e n   i n i t i a t e d   b y   u s e r   b y   a   c a l l   t o  
     *                   H A L _ I R D A _ A b o r t R e c e i v e _ I T   A P I   ( A b o r t   o n l y   R x   t r a n s f e r )  
     *                   ( T h i s   c a l l b a c k   i s   e x e c u t e d   a t   e n d   o f   D M A   R x   A b o r t   p r o c e d u r e   f o l l o w i n g   u s e r   a b o r t   r e q u e s t ,  
     *                   a n d   l e a d s   t o   u s e r   R x   A b o r t   C o m p l e t e   c a l l b a c k   e x e c u t i o n ) .  
     *   @ p a r a m     h d m a   D M A   h a n d l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I R D A _ D M A R x O n l y A b o r t C a l l b a c k ( D M A _ H a n d l e T y p e D e f   * h d m a )  
 {  
     I R D A _ H a n d l e T y p e D e f   * h i r d a   =   ( I R D A _ H a n d l e T y p e D e f   * ) ( ( D M A _ H a n d l e T y p e D e f   * ) h d m a ) - > P a r e n t ;  
  
     h i r d a - > R x X f e r C o u n t   =   0 x 0 0 U ;  
  
     / *   R e s t o r e   h i r d a - > R x S t a t e   t o   R e a d y   * /  
     h i r d a - > R x S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
  
     / *   C a l l   u s e r   A b o r t   c o m p l e t e   c a l l b a c k   * /  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k   * /  
     h i r d a - > A b o r t R e c e i v e C p l t C a l l b a c k ( h i r d a ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   A b o r t   R e c e i v e   C o m p l e t e   C a l l b a c k   * /  
     H A L _ I R D A _ A b o r t R e c e i v e C p l t C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K   * /  
 }  
  
 / * *  
   *   @ b r i e f     S e n d   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e .  
   *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
   *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
   *   @ r e t v a l   H A L   s t a t u s  
   * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I R D A _ T r a n s m i t _ I T ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     u i n t 1 6 _ t   * t m p ;  
  
     / *   C h e c k   t h a t   a   T x   p r o c e s s   i s   o n g o i n g   * /  
     i f   ( h i r d a - > g S t a t e   = =   H A L _ I R D A _ S T A T E _ B U S Y _ T X )  
     {  
         i f   ( h i r d a - > I n i t . W o r d L e n g t h   = =   I R D A _ W O R D L E N G T H _ 9 B )  
         {  
             t m p   =   ( u i n t 1 6 _ t   * )   h i r d a - > p T x B u f f P t r ;  
             h i r d a - > I n s t a n c e - > D R   =   ( u i n t 1 6 _ t ) ( * t m p   &   ( u i n t 1 6 _ t ) 0 x 0 1 F F ) ;  
             i f   ( h i r d a - > I n i t . P a r i t y   = =   I R D A _ P A R I T Y _ N O N E )  
             {  
                 h i r d a - > p T x B u f f P t r   + =   2 U ;  
             }  
             e l s e  
             {  
                 h i r d a - > p T x B u f f P t r   + =   1 U ;  
             }  
         }  
         e l s e  
         {  
             h i r d a - > I n s t a n c e - > D R   =   ( u i n t 8 _ t ) ( * h i r d a - > p T x B u f f P t r + +   &   ( u i n t 8 _ t ) 0 x 0 0 F F ) ;  
         }  
  
         i f   ( - - h i r d a - > T x X f e r C o u n t   = =   0 U )  
         {  
             / *   D i s a b l e   t h e   I R D A   T r a n s m i t   D a t a   R e g i s t e r   E m p t y   I n t e r r u p t   * /  
             C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ T X E I E ) ;  
  
             / *   E n a b l e   t h e   I R D A   T r a n s m i t   C o m p l e t e   I n t e r r u p t   * /  
             S E T _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ T C I E ) ;  
         }  
  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     W r a p s   u p   t r a n s m i s s i o n   i n   n o n   b l o c k i n g   m o d e .  
     *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I R D A _ E n d T r a n s m i t _ I T ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     / *   D i s a b l e   t h e   I R D A   T r a n s m i t   C o m p l e t e   I n t e r r u p t   * /  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ T C I E ) ;  
  
     / *   D i s a b l e   t h e   I R D A   E r r o r   I n t e r r u p t :   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   * /  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
     / *   T x   p r o c e s s   i s   e n d e d ,   r e s t o r e   h i r d a - > g S t a t e   t o   R e a d y   * /  
     h i r d a - > g S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
     / *   C a l l   r e g i s t e r e d   T x   c o m p l e t e   c a l l b a c k   * /  
     h i r d a - > T x C p l t C a l l b a c k ( h i r d a ) ;  
 # e l s e  
     / *   C a l l   l e g a c y   w e a k   T x   c o m p l e t e   c a l l b a c k   * /  
     H A L _ I R D A _ T x C p l t C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K   * /  
  
     r e t u r n   H A L _ O K ;  
 }  
  
 / * *  
     *   @ b r i e f     R e c e i v e s   a n   a m o u n t   o f   d a t a   i n   n o n   b l o c k i n g   m o d e .  
     *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ r e t v a l   H A L   s t a t u s  
     * /  
 s t a t i c   H A L _ S t a t u s T y p e D e f   I R D A _ R e c e i v e _ I T ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     u i n t 1 6 _ t   * t m p ;  
     u i n t 1 6 _ t     u h d a t a ;  
  
     / *   C h e c k   t h a t   a   R x   p r o c e s s   i s   o n g o i n g   * /  
     i f   ( h i r d a - > R x S t a t e   = =   H A L _ I R D A _ S T A T E _ B U S Y _ R X )  
     {  
         u h d a t a   =   ( u i n t 1 6 _ t )   R E A D _ R E G ( h i r d a - > I n s t a n c e - > D R ) ;  
         i f   ( h i r d a - > I n i t . W o r d L e n g t h   = =   I R D A _ W O R D L E N G T H _ 9 B )  
         {  
             t m p   =   ( u i n t 1 6 _ t   * )   h i r d a - > p R x B u f f P t r ;  
             i f   ( h i r d a - > I n i t . P a r i t y   = =   I R D A _ P A R I T Y _ N O N E )  
             {  
                 * t m p   =   ( u i n t 1 6 _ t ) ( u h d a t a   &   ( u i n t 1 6 _ t ) 0 x 0 1 F F ) ;  
                 h i r d a - > p R x B u f f P t r   + =   2 U ;  
             }  
             e l s e  
             {  
                 * t m p   =   ( u i n t 1 6 _ t ) ( u h d a t a   &   ( u i n t 1 6 _ t ) 0 x 0 0 F F ) ;  
                 h i r d a - > p R x B u f f P t r   + =   1 U ;  
             }  
         }  
         e l s e  
         {  
             i f   ( h i r d a - > I n i t . P a r i t y   = =   I R D A _ P A R I T Y _ N O N E )  
             {  
                 * h i r d a - > p R x B u f f P t r + +   =   ( u i n t 8 _ t ) ( u h d a t a   &   ( u i n t 8 _ t ) 0 x 0 0 F F ) ;  
             }  
             e l s e  
             {  
                 * h i r d a - > p R x B u f f P t r + +   =   ( u i n t 8 _ t ) ( u h d a t a   &   ( u i n t 8 _ t ) 0 x 0 0 7 F ) ;  
             }  
         }  
  
         i f   ( - - h i r d a - > R x X f e r C o u n t   = =   0 U )  
         {  
             / *   D i s a b l e   t h e   I R D A   D a t a   R e g i s t e r   n o t   e m p t y   I n t e r r u p t   * /  
             C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ R X N E I E ) ;  
  
             / *   D i s a b l e   t h e   I R D A   P a r i t y   E r r o r   I n t e r r u p t   * /  
             C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   U S A R T _ C R 1 _ P E I E ) ;  
  
             / *   D i s a b l e   t h e   I R D A   E r r o r   I n t e r r u p t :   ( F r a m e   e r r o r ,   n o i s e   e r r o r ,   o v e r r u n   e r r o r )   * /  
             C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   U S A R T _ C R 3 _ E I E ) ;  
  
             / *   R x   p r o c e s s   i s   c o m p l e t e d ,   r e s t o r e   h i r d a - > R x S t a t e   t o   R e a d y   * /  
             h i r d a - > R x S t a t e   =   H A L _ I R D A _ S T A T E _ R E A D Y ;  
  
 # i f   ( U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   = =   1 )  
             / *   C a l l   r e g i s t e r e d   R x   c o m p l e t e   c a l l b a c k   * /  
             h i r d a - > R x C p l t C a l l b a c k ( h i r d a ) ;  
 # e l s e  
             / *   C a l l   l e g a c y   w e a k   R x   c o m p l e t e   c a l l b a c k   * /  
             H A L _ I R D A _ R x C p l t C a l l b a c k ( h i r d a ) ;  
 # e n d i f   / *   U S E _ H A L _ I R D A _ R E G I S T E R _ C A L L B A C K S   * /  
  
             r e t u r n   H A L _ O K ;  
         }  
         r e t u r n   H A L _ O K ;  
     }  
     e l s e  
     {  
         r e t u r n   H A L _ B U S Y ;  
     }  
 }  
  
 / * *  
     *   @ b r i e f     C o n f i g u r e s   t h e   I R D A   p e r i p h e r a l .  
     *   @ p a r a m     h i r d a     P o i n t e r   t o   a   I R D A _ H a n d l e T y p e D e f   s t r u c t u r e   t h a t   c o n t a i n s  
     *                                 t h e   c o n f i g u r a t i o n   i n f o r m a t i o n   f o r   t h e   s p e c i f i e d   I R D A   m o d u l e .  
     *   @ r e t v a l   N o n e  
     * /  
 s t a t i c   v o i d   I R D A _ S e t C o n f i g ( I R D A _ H a n d l e T y p e D e f   * h i r d a )  
 {  
     u i n t 3 2 _ t   p c l k ;  
  
     / *   C h e c k   t h e   p a r a m e t e r s   * /  
     a s s e r t _ p a r a m ( I S _ I R D A _ I N S T A N C E ( h i r d a - > I n s t a n c e ) ) ;  
     a s s e r t _ p a r a m ( I S _ I R D A _ B A U D R A T E ( h i r d a - > I n i t . B a u d R a t e ) ) ;  
     a s s e r t _ p a r a m ( I S _ I R D A _ W O R D _ L E N G T H ( h i r d a - > I n i t . W o r d L e n g t h ) ) ;  
     a s s e r t _ p a r a m ( I S _ I R D A _ P A R I T Y ( h i r d a - > I n i t . P a r i t y ) ) ;  
     a s s e r t _ p a r a m ( I S _ I R D A _ M O D E ( h i r d a - > I n i t . M o d e ) ) ;  
     a s s e r t _ p a r a m ( I S _ I R D A _ P O W E R M O D E ( h i r d a - > I n i t . I r D A M o d e ) ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - -   U S A R T   C R 2   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - - * /  
     / *   C l e a r   S T O P [ 1 3 : 1 2 ]   b i t s   * /  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 2 ,   U S A R T _ C R 2 _ S T O P ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - -   U S A R T   C R 1   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - * /  
     / *   C l e a r   M ,   P C E ,   P S ,   T E   a n d   R E   b i t s   * /  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   ( U S A R T _ C R 1 _ M   |   U S A R T _ C R 1 _ P C E   |   U S A R T _ C R 1 _ P S   |   U S A R T _ C R 1 _ T E   |   U S A R T _ C R 1 _ R E ) ) ;  
  
     / *   C o n f i g u r e   t h e   U S A R T   W o r d   L e n g t h ,   P a r i t y   a n d   m o d e :  
           S e t   t h e   M   b i t s   a c c o r d i n g   t o   h i r d a - > I n i t . W o r d L e n g t h   v a l u e  
           S e t   P C E   a n d   P S   b i t s   a c c o r d i n g   t o   h i r d a - > I n i t . P a r i t y   v a l u e  
           S e t   T E   a n d   R E   b i t s   a c c o r d i n g   t o   h i r d a - > I n i t . M o d e   v a l u e   * /  
     / *   W r i t e   t o   U S A R T   C R 1   * /  
     S E T _ B I T ( h i r d a - > I n s t a n c e - > C R 1 ,   ( h i r d a - > I n i t . W o r d L e n g t h   |   h i r d a - > I n i t . P a r i t y   |   h i r d a - > I n i t . M o d e ) ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - -   U S A R T   C R 3   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - * /  
     / *   C l e a r   C T S E   a n d   R T S E   b i t s   * /  
     C L E A R _ B I T ( h i r d a - > I n s t a n c e - > C R 3 ,   ( U S A R T _ C R 3 _ R T S E   |   U S A R T _ C R 3 _ C T S E ) ) ;  
  
     / * - - - - - - - - - - - - - - - - - - - - - - - - - -   U S A R T   B R R   C o n f i g u r a t i o n   - - - - - - - - - - - - - - - - - - - - - - - * /  
     i f ( h i r d a - > I n s t a n c e   = =   U S A R T 1 )  
     {  
         p c l k   =   H A L _ R C C _ G e t P C L K 2 F r e q ( ) ;  
         S E T _ B I T ( h i r d a - > I n s t a n c e - > B R R ,   I R D A _ B R R ( p c l k ,   h i r d a - > I n i t . B a u d R a t e ) ) ;  
     }  
     e l s e  
     {  
         p c l k   =   H A L _ R C C _ G e t P C L K 1 F r e q ( ) ;  
         S E T _ B I T ( h i r d a - > I n s t a n c e - > B R R ,   I R D A _ B R R ( p c l k ,   h i r d a - > I n i t . B a u d R a t e ) ) ;  
     }  
 }  
  
 / * *  
     *   @ }  
     * /  
  
 # e n d i f   / *   H A L _ I R D A _ M O D U L E _ E N A B L E D   * /  
 / * *  
     *   @ }  
     * /  
  
 / * *  
     *   @ }  
     * /  
  
 / * * * * * * * * * * * * * * * * * * * * * * * *   ( C )   C O P Y R I G H T   S T M i c r o e l e c t r o n i c s   * * * * * E N D   O F   F I L E * * * * /  